//Victoria Andresen
/* Write a program that calculates the 2 to the n_th power( n is a negative or positive integer)
e.g, if n = 10,  calculates 2 ** 10 = 1024. (Do not use the function pow( ) )*/

#include <iostream>
using namespace std;

int main()
{
    double base = 2,
           powernum=2,
           i=1, // to control how many times base gets raised to a power.
           exp;

    cout << "Raise 2 to the power of (enter power) ";
    cin >> exp;

    if (exp >0)
    {
        while (i < exp)
        {
            powernum = powernum * base;
            i++;
        }
    }
    else
    {
        i=-1;
        while (i > exp)
        {
          powernum = powernum * base;
          i--;
          cout <<i << endl;
        }
         powernum = 1/powernum;
    }
    if (exp == 0)
    {
        powernum = 1;
    }

    cout << "2 to the power of "<< exp <<" = "<<powernum<<endl;
    return 0;
}
