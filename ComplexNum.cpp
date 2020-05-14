// Name: Josh Christensen
// Date: 5/14/2020
// Project: ComplexNumbers
// Purpose: Implementation of ComplexNum.h

#include "ComplexNum.h"


ComplexNum::ComplexNum() {
    realPart = 0;
    imaginaryPart = 0;
}

ComplexNum::ComplexNum(double r, double i) {
    realPart = r;
    imaginaryPart = i;
}

ComplexNum::ComplexNum(ComplexNum &c) {
    realPart = c.getReal();
    imaginaryPart = c.getImaginary();
}

double ComplexNum::getReal() {
    return realPart;
}

double ComplexNum::getImaginary() {
    return imaginaryPart;
}

void ComplexNum::setReal(double r) {
    realPart = r;
}

void ComplexNum::setImaginary(double i) {
    imaginaryPart = i;
}

ComplexNum ComplexNum::Add(ComplexNum c) {
    return ComplexNum(realPart + c.getReal(),imaginaryPart + c.getImaginary()); //simply add both components and return new ComplexNum
}

ComplexNum ComplexNum::Subtract(ComplexNum c) {
    return ComplexNum(realPart - c.getReal(),imaginaryPart - c.getImaginary()); //simply subtract both components and return new ComplexNum
}

ComplexNum ComplexNum::Multiply(ComplexNum c) {
    return ComplexNum(realPart * c.getReal() - imaginaryPart * c.getImaginary(), realPart * c.getImaginary() + imaginaryPart * c.getReal()); //Uses foiling to multiply, returns new ComplexNum
}

std::string ComplexNum::toString() {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << realPart << " + " << imaginaryPart << "i "; //uses stringstream to convert doubles to text nicely
    return stream.str();
}

ComplexNum ComplexNum::operator + (ComplexNum c) {
    return Add(c);
}

ComplexNum ComplexNum::operator - (ComplexNum c) {
    return Subtract(c);
}

ComplexNum ComplexNum::operator * (ComplexNum c) {
    return Multiply(c);
}


