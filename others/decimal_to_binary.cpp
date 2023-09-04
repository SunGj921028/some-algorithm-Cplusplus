/**
 * @file
 * @brief Function to convert decimal number to binary representation
 */

#include <iostream>
using namespace std;

// This method converts the bit representation and stores it as a decimal number.
void method1(int number){
    int remainder, binary, var = 1;

    do{
        remainder = number % 2;
        number /= 2;
        binary = binary + (remainder * var);
        var *= 10;
    }while(number > 0);
    cout << "Method 1 : " << binary << endl;
    return;
}

// This method stores each bit value from LSB to MSB and then prints them back from MSB to LSB.
void method2(int number){
    int num_bits = 0;
    char bit_string[50];

    do{
        bool bit = number & 0x01; // get last bit
        if(bit){
            bit_string[num_bits++] = '1';
        }else{
            bit_string[num_bits++] = '0';
        }
        number >>= 1; // right shift 1 bit 1
    }while(number > 0);

    cout << "Method 2 : ";
    while(num_bits >= 0){
        cout << bit_string[num_bits--]; // print from MSB to LSB
    }
    cout << endl;
    return;
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    method1(number);
    method2(number);

    return 0;
}