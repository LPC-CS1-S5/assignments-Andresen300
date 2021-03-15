#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num, i, min=20000000;
  unsigned seed = time(0);
  srand(seed);

  for (i=0; i<5; i++)
  {
    num = rand()%100;
    cout << num << " "<< endl;
    if (num <min)
      {
        min=num;
      }
  }
  cout << "The minimun value is "<< min<< endl;
  
}