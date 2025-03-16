#include <iostream>

#include "exercise/exerciseOne.h"
#include "HowToProgramC++/Chapter_2/numbers.h"
#include "HowToProgramC++/Chapter_2/Printing.h"
#include "ObjectOrientedProgrammingInc++/Chapter_2/amount_dollars.h"
#include "ObjectOrientedProgrammingInc++/Chapter_2/arthimatic.h"
#include "ObjectOrientedProgrammingInc++/Chapter_2/favorityPoem.h"
#include "ObjectOrientedProgrammingInc++/Chapter_2/gallons.h"
#include "ObjectOrientedProgrammingInc++/Chapter_2/isLower.h"
#include "ObjectOrientedProgrammingInc++/Chapter_2/table.h"
using namespace  std;

int main()
{

 // What, if anything, prints when each of the following C++ statements is performed? If nothing prints, then answer “nothing.” Assume x = 2 and y = 3.
 int x =2;
 int y =3;
 int z;
cout << x;
  cout << x + x;
    cout << "x=";
     cout << "x = " << x;
    cout << x + y << " = " << y + x;
    z = x + y;
     cin >> x >> y;
     cout << "x + y = " << x + y;
    cout << "\n";
    //========================================================================================
    /*
     * solving problem from Object Oriented Programming in C++ book
     */

    /*Chapter 2*/
    // gallons();
    // table();
    // arthimatic();
    // favoritePoem();
    // isLower();
    amount_dollars amount_dollars;
    // amount_dollars.anoumt_in_dollars();
    // anoumt_in_dollars();
    //===============================================================================================
    /*
     * solving problem from How to program C++ book
     */

    numbers numbers;
    // numbers.arthimatic();


    // printing.printNumbers();
    // =============================================================================================
    exerciseOne::exerciseOne exerciseOne;
    // exerciseOne.areaOfSphere();
    // exerciseOne.KelvinandFahrenheit();
    // exerciseOne.results();
    return 0;
}
