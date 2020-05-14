// Name: Josh Christensen
// Date: 5/14/2020
// Project: ComplexNumbers
// Purpose: Run everything

#include <iostream> // for cout
#include "ComplexNum.h" // for our class

using namespace std; // for easy use

int main() {
    ComplexNum A = ComplexNum(1,1); //use non-default constructor
    ComplexNum B = ComplexNum(); //use default constructor
    B.setReal(2); //test setter methods
    B.setImaginary(2);


    cout << A.Add(B).toString() << endl; //test Add() , getReal(), getImaginary(), and toString() methods.
    cout << A.Subtract(B).toString() << endl; //test Subtract method
    cout << A.Multiply(B).toString() << endl; //test Multiply method
    cout << ComplexNum(A + B).toString() << endl; //test add overload operator and copy constructor
    cout << ComplexNum(A - B).toString() << endl; //test subtract overload operator
    cout << ComplexNum(A * B).toString() << endl; //test multiply overload operator

    cout << endl << endl;

    cout << "expected output: " << endl;
    cout << "3.00 + 3.00i\n"
            "-1.00 + -1.00i\n"
            "0.00 + 4.00i\n"
            "3.00 + 3.00i\n"
            "-1.00 + -1.00i\n"
            "0.00 + 4.00i";
}