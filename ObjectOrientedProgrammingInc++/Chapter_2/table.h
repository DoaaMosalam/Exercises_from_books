//
// Created by DoaaM on 3/8/2025.
//

#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <iomanip>

using namespace std;
/*
*2. Write a program that generates the following table:
1990 135
1991 7290
1992 11300
1993 16200
Use a single cout statement for all output
 */

void table () {
    cout <<"1990" << setw(8) << "135"<<endl
          <<"199" << setw(8) << "7290"<<endl
           <<"1992" << setw(8) <<"11300"<<endl
           <<"1993" << setw(8) << "16200"<<endl;
}

#endif //TABLE_H
