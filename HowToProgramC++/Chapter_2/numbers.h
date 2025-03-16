//
// Created by DoaaM on 3/16/2025.
//
/*2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the two numbers.*/

#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>

#endif //NUMBERS_H
using namespace std;

class numbers {
public:
    void arthimatic() {
        int num1,num2;
        cout<<"Enter first number: " << endl;
        cin>> num1;
        cout <<"Enter second number: " <<endl;
        cin>> num2;
        cout<<"The sum of the two numbers is: "<< num1 + num2 <<endl;
        cout<<"The product of the two numbers is: "<< num1 * num2 <<endl;
        cout<<"The difference of the two numbers is: "<< num1 - num2 <<endl;
        cout<<"The quotient of the two numbers is: "<< num1 / num2 <<endl;
    }
};

