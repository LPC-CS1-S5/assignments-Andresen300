/*Make a program that prints the index (i, j) with the given order in the blue triangle by using the nested for loop. The index will be printed by the left to right and the top to bottom.*/
#include <iostream>
using namespace std;

int main()
{
  int i,j;

  for (i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      cout << i << ","<<j << endl;
    }
  }
}