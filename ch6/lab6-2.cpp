// write a program that calculated the 2 to the n_th power

#include <iostream>
using namespace std;

double nthpowerp (int);
double nthpowern (int);
void printout (double);

int main()
{
    int n;          // to hold the how many powers we want to raise 2 to.
    double result;  // number raise to a power

    cout << "Enter the n_th power number\n";
    cin >> n;

    if (n > 0)
        result = nthpowerp(n);
    else if (n < 0)
        result = nthpowern(n);
    else
        result = 1;
    printout(result);
}

/* Value returning function nthpowerp
Task:       Takes positive number n to raise 2 to that power.
Returns:    double result 2 to the n_power */

double nthpowerp (int n)
{
    double result = 2;
    for ( int i = 1; i < n; i++)
    {
        result = result * 2;
    }
    return result;
}

double nthpowern (int n)
{
    double result=1;
    int add =2;            //to keep truck of number raised to the positive exponent to later convert it to the negative.
    for (int i = -1; i > n; i--)
    {
        add = add * 2;
    }
       result = 1.0/(add);

    return result;
}

void printout (double result)
{
    cout << result << endl;
}
