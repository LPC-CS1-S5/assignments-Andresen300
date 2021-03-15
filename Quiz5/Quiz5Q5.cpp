#include <iostream>
using namespace std;

int main()
{
  int num, i, start, finish;
  cout << "Enter two numbers and I will tell you all the prime numbers\n";
  cin >> start >> finish;

  while ((start < 1 || start > 100) || (finish <2 || finish >100)|| start > finish)
  {
    cout << "error \n";
    cout << "Enter two numbers and I will tell you all the prime numbers\n";
    cin >> start >> finish;
  }

        for (num = start; num <= finish; num++)
        { // num : from start to finish
            // num is prime or not, num = 6;
            for( i=2; i < num; i++) // 2,3,4,5 go through the loop break and go to the first for loop when condition is true.
        {
                if (num % i == 0)
                    break;
            }
            if ( i == num ) //we got to the break after full  iteration for the 2nd for loop
                cout << num << " ";
        }

}

