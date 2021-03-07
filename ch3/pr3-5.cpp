#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int num1, num2, num3; 

  srand(time(0));
  // Random mumber between 0...99
  num1 = random() % 100;
  num2 = random() % 100;
  num3 = random() % 100;

  cout << " The random numbers are: "<< num1 << " " << num2 << " "<< num3<< endl;
  return 0;
}
