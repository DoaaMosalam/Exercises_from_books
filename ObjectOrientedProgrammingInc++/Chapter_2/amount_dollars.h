//
// Created by DoaaM on 3/16/2025.
//

#ifndef AMOUNT_DOLLARS_H
#define AMOUNT_DOLLARS_H
#include <iostream>
/*
* 6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.
 */
#endif //AMOUNT_DOLLARS_H
using namespace std;
class amount_dollars {
public:
    void anoumt_in_dollars() {
        float amount;
        float pound = 1.487;
        float franc = 0.172;
        float deutschemark = 0.584;
        float yen = 0.00955;

        cout<<"Enter the amount in dollars: ";
        cin>>amount;
        cout<<"your amount is: " <<amount << " The amount is pound is: " << amount * pound <<endl;
        cout<<"your amount is: " <<amount << " The amount is franc is: " << amount * franc <<endl;
        cout<<"your amount is: " <<amount << " The amount is deutschemark is: " << amount * deutschemark <<endl;
        cout<<"your amount is: " <<amount << " The amount is yen is: " << amount * yen <<endl;
    }
}