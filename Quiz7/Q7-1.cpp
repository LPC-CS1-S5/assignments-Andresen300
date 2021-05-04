
#include <cmath>
#include <iostream>
using namespace std;

//function prototype
void findValue(double[], int);
const int N = 10;

int main()
{
  double number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  {
    cout << " The numbers whith adjecent difference less than 10: \n";
    findValue(number, N);
  }
}
// function defenition
/* task:    Find the element where the difference between adjacent elements is less
             than 10 .  print.
  Data in:  accepts an array of ints and size.
  Data out:  none.*/
  void findValue (double number[], int n)
  {
    double difference=0;
    double difference2=0;

    for(int i = 0; i<N; i++)
    {
      difference=0;
      difference2=0;
      if (i > 0 && i< 9)
      {
        difference = (abs(number[i] - number[i-1]));
        difference2 =(abs(number[i] - number[i+1]));

        if ( difference < 10 && difference2 <10)
          {
              cout << number[i]<< endl;
          }
      }
      else if (i==0)
      {
          if(difference2 =(abs(number[i] - number[i+1])) <10)
          cout << number[i]<< endl;
      }
      else if (i== 9)
      {
          if(difference2 =(abs(number[i] - number[i-1])) <10)
          cout << number[i]<< endl;
      }
    }
  }


