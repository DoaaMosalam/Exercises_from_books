//
// Created by DoaaM on 3/16/2025.
//
/*
 * 2.17 (Printing) Write a program that prints the numbers 1 to 4 on the same line with each pair
of adjacent numbers separated by one space. Do this several ways:
a) Using one statement with one stream insertion operator.
b) Using one statement with four stream insertion operators.
c) Using four statements.
 */

#ifndef PRINTING_H
#define PRINTING_H

#include <iostream>

using namespace std;

class Printing{
public:
    void printNumbers() {
        cout << "1 2 3 4" << endl;
    }


    void printNumbersWithFourStream() {
        cout << "1 " << "2 " << "3 " << "4" << endl;
    }

    void printNumbersWithFourStatements() {
        cout << "1 ";
        cout << "2 ";
        cout << "3 ";
        cout << "4" << endl;
    }
};
#endif //PRINTING_H
