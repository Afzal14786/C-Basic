// Calculate the percentage of 5 subjects

#include<iostream>
using namespace std;

int main() {
    int maths, physics, chemestry, computerScience, english;

    maths = 97, physics = 86, chemestry = 89, computerScience = 90, english = 91;

    float percentage = (maths + english + chemestry + computerScience + physics) / 5.0;

    cout << "Total Percentage = " << percentage << " %"<< "\n";
}