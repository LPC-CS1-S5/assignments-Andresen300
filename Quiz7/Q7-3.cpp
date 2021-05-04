#include <iostream>
using namespace std;

//function prototype
int findMax(int[], int, int);

const int N = 10;

int main()
{
  int max;
  int  number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  int from = 0;
  int to = N/2;
  max =findMax(number, from, to);
  cout << "The greatest number in a first half of an array = " << max << endl;
}
int findMax (number[], int from, int to)
{
  int max = number[from];
  for (i= from; i < to; i++)
  {
    if (max < number[i])
    {
      max = number[i];
    }
  }
  return max;
}
