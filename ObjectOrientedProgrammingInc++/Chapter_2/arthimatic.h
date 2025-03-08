//
// Created by DoaaM on 3/8/2025.
//

#ifndef ARTHIMATIC_H
#define ARTHIMATIC_H
#include <iostream>
#include <iomanip>
using namespace std;
/*
 * Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19.
 */
void arthimatic()
{
    int num = 10;
    cout << num << endl;
    num *=2;
    cout << num << endl;
    num--;
    cout << num << endl;
}

#endif //ARTHIMATIC_H
