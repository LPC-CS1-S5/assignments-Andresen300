#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  // Set up 5 variables
  float a = 28, b = 32, c = 37, d = 24, e = 33,
         sum = 0, average = 0;

  // Calculate the sum of 5 variables
  sum = a+b+c+d+e;
  average = sum/5;

  cout << setprecision (3) << fixed;
  cout << "The sum of 5 numbers is " << sum << endl;
  cout << "The average is " << average<< endl;
  return 0;


}