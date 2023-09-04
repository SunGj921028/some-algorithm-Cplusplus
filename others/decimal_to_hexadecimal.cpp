/**
 * @file
 * @brief Convert decimal number to hexadecimal representation (10 to 16)
 */

#include <iostream>
using namespace std;

int main(void){
    int valueToConvert = 0;
    int hexArray[8];
    int i = 0;
    char HexValues[] = "0123456789ABCDEF";

    cout << "Enter a Decimal Value" << endl;

    cin >> valueToConvert;

    while(valueToConvert > 15){ // Dec to Hex Algorithm
        hexArray[i++] = valueToConvert % 16; // Gets remainder
        valueToConvert /= 16;
        // valueToConvert >>= 4; // This will divide by 2^4 = 16 and is faster
    }
    hexArray[i] = valueToConvert; // Gets last value
    cout << "Hex Value: ";
    while(i >= 0){ cout << HexValues[hexArray[i--]];}
    
    cout << endl;
    return 0;
}