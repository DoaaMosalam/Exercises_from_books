//
// Created by DoaaM on 3/8/2025.
//

#ifndef EXERCISEONE_H
#define EXERCISEONE_H
#include <iostream>
#include <cmath>
using  namespace std;

namespace exerciseOne {

class exerciseOne {
public:
    /*
 1.	Write a c ++ program to find the volume and surface area of sphere.
Hint: PI=3.14
volume=4.0/3 *pi*r*r*r;
area=4*pi*r*r;
     */
    void areaOfSphere() {
        int r,PI = 3.14;
        cout<< "Enter area of sphere: "<<endl;
        cin >> r;
        // int volume = 4.0/3.0 * PI * r*r*r;
        int volume = 4.0/3.0 * M_PI * pow(r,3);
        cout<< "The volume of the sphere is: "<< volume <<endl;
        // int area = 4*PI*r*r;
        int area = 4 * M_PI * pow(r,2);
        cout<< "The area of the sphere is: "<< area <<endl;
    }
    /*
     * 2.	Write a program that calculate Kelvin and Fahrenheit from a Celsius degree entered by the user.
     * k = c + 273       f = c * 5/9 + 3
     */
    void KelvinandFahrenheit() {
        double c,f,k;
        cout<<"Enter the Celsius degree: "<<endl;
        cin>> c;
        k = c + 273;
        f = c * 5/9 +3;
        cout<<"The Kelvin degree is: "<<k<<endl;
        cout<<"The Fahrenheit degree is: "<<f<<endl;

    }

    static void results() {
        // 3.	What is the output of:
        cout << 6 % 8 << endl        //6
<< 7 % 8 << endl                //7
<< 8 % 8 << endl               //0
<< 9 % 8 << endl              //1
<< 10 % 8 << endl;           //2


        cout << 3 / 2 + 5.5; // 6.5
    }


};

} // exerciseOne

#endif //EXERCISEONE_H
