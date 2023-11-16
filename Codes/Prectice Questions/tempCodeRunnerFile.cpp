// Calculate Simple Intrest //

#include <iostream>
using namespace std;

int main() {

    // simpleIntrest  = (principleAmount * rate * time) / 100;

    float principleAmount, rate, time;

    principleAmount = 210000;
    rate = 5.55;
    time = 2;

    float simple_intrest = (principleAmount * rate * time) / 100;
    cout << "Simple intrest = " << simple_intrest << endl;

    cout << "Total Amount = " << principleAmount + simple_intrest << endl;
}