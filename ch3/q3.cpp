#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // Set up variables 
  
  double d1,d2, d3;

  unsigned seed = time(0);
  srand (seed);

  // assing random munbers to variables.
  d1= rand();
  d2= rand();
  d3= rand();

  //Calculate sum and average
  double sum = d1+d2+d3;
  double average = sum/3;

  // display with setprecision(5)
  cout << setprecision(5);
  cout << d1 << endl;
  cout <<d2 << endl;
  cout << d3 << endl;
  cout << sum << endl;
  cout << average<< endl;
      return 0;
}
