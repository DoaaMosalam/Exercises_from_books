//
// Created by DoaaM on 3/8/2025.
//

#ifndef GALLONS_H
#define GALLONS_H
#include <iostream>

using namespace std;
/*
*1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.
 */
void gallons() {
 int gallons, cubicfeet;
 cout<< "Enter the number in gallon, please: " << endl;
 cin>> gallons;
 cubicfeet = gallons / 7.481;
 cout<< "The equivalent in cubic feet is: " << cubicfeet << endl;
}



#endif //GALLONS_H
