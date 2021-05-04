
#include <cmath>
#include <iostream>
using namespace std;

//function prototype
void findValue(int[], int);
const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  
  for(int i = 0; i<N; i++)
  {
    findValue(number, N);
  }
}
// function defenition 
/* task:    Find the element where the difference between adjacent elements is less
             than 10 .  print.
  Data in:  accepts an array of ints and size.
  Data out:  none.*/
  void findValue (int number[], int n)
  {
    for(int i = 0; i<N; i++)
    {
      if (number[i] > 0 && number[i]< 9)
      {
        if ((abs(number[i] - number[i-1])) < 10) && ((abs(number[i] - number[i+1])) < 10)
        {
          cout << number[i];
        }
      } 
    }
  }  
