// Name: Josh Christensen
// Date: 5/14/2020
// Project: ComplexNumbers
// Purpose: Define ComplexNum Class

#ifndef COMPLEXNUMBERS_COMPLEXNUM_H
#define COMPLEXNUMBERS_COMPLEXNUM_H

#include <string> //for toString
#include <sstream> //for conversions
#include <iomanip> //for stream manipulation

class ComplexNum {
    double realPart;
    double imaginaryPart;

public:
    ComplexNum(); //default constructor

    ComplexNum(double r, double i); //for not using set methods

    ComplexNum(ComplexNum &c); //copy constructor

    double getReal(); //getters

    double getImaginary();

    void setReal(double r); //setters

    void setImaginary(double i);

    ComplexNum Add(ComplexNum c); // adds two complex numbers

    ComplexNum Subtract(ComplexNum c); //subtracts two complex numbers

    ComplexNum Multiply(ComplexNum c); //Multiplies two complex numbers

    std::string toString(); //outputs complex numbers in a+bi form

    ComplexNum operator + (ComplexNum c); //overload the + operator, calls Add()

    ComplexNum operator - (ComplexNum c); //overload the - operator, calls Subtract()

    ComplexNum operator * (ComplexNum c); //overload the * operator, calls Multiply()
};

#endif //COMPLEXNUMBERS_COMPLEXNUM_H
