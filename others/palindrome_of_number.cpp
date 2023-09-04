#include <iostream>
#include <algorithm>

// This program cheats by using the STL library's std::reverse function.

#ifdef _MSC_VER
// Required to compile std::toString function using MSVC
#include <string>
#else
#include <cstring>
#endif

int main(){
    int num;
    cout << "Enter number = ";
    cin >> num;

    string s1 = to_string(num); // convert number to string
    string s2 = s1;

    reverse(s1.begin(), s1.end()); // reverse the string

    if(s1==s2){
        cout << "True\n";
    }else{
        cout << "False\n";
    }
    return 0;
}