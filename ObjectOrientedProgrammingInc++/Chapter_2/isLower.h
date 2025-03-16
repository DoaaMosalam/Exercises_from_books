//
// Created by DoaaM on 3/16/2025.
//

#ifndef ISLOWER_H
#define ISLOWER_H
#include <iostream>

#endif //ISLOWER_H

using namespace std;
/*
* 5. A library function, islower(), takes a single character (a letter) as an argument and
returns a nonzero integer if the letter is lowercase, or zero if it is uppercase. This function requires the header file CTYPE.H. Write a program that allows the user to enter a letter, and then displays either zero or nonzero, depending on whether a lowercase or
uppercase letter was entered. (See the SQRT program for clues.)
 */

void isLower() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if(islower(letter)) {
        cout << "Nonzero" << (int) letter <<endl;
    }else {
        cout << "Zero" << endl;
    }
}