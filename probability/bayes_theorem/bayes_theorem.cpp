// 貝氏定理

// P(A|B) -> The probability of A given that the event B has occured.
// P(A|B) = ( P(B|A)*P(A) ) / P(B)
#include <iostream>

double bayes_Agiven_B(double BgivenA, double A, double B){
    return (BgivenA * A) / (B);
}

double bayes_Bgiven_A(double AgivenB, double A, double B){
    return (AgivenB * A) / (B);
}

using namespace std;

int main(){
    double A = 0.01;
    double B = 0.1;
    double BgivenA = 0.9;
    double AgivenB = bayes_Agiven_B(BgivenA,A,B);
    cout << "A given B = " << AgivenB << endl;
    cout << "B given A = " << BgivenA << endl;
    return 0;
}