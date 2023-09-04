#include <iostream>

using namespace std;

double addition_rule_independent(double A, double B){
    return (A + B) - (A * B);
}

double addition_rule_dependent(double A, double B, double B_given_A){
    return (A + B) - (A * B_given_A);
}

int main(){
    double A = 0.5;
    double B = 0.25;
    double B_given_A = 0.05;

    cout << "independent P(A or B) = " << addition_rule_independent(A,B) << endl;
    cout << "dependent P(A or B) = " << addition_rule_dependent(A,B,B_given_A) << endl;

    return 0;
}