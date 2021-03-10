
/*Make a program that find the prime numbers in the given range.
example) find the prime numbers in the range [1..100]
2, 3, 5, 7, ... , 97*/

#include <iostream>
using namespace std;

int main()
{
    int  start, finish;
    int num, i;   // num to hold number that we working of to decide if it is prime, i is to go through multiples that makes number not prime.

    cout << "Enter two numbers and I will tell you all the prime numbers\n";
    cin >> start >> finish;

    while (start > finish)
       {
           cout << "Enter two numbers and I will tell you all the prime numbers\n";
           cin >> start >> finish;
       }

    for (num = start; num < finish; num++) // we start with the firs number and and stop at the last
        {
            for (i = 2; i <= num; i++) //find all the multipuls
            {
                if (num % i == 0)        // if condition is true it means number is no prime. break out of the loop and go back to the 1st for loop
                break;
            }
            if ( i == num)
                cout << num << " ";
        }

}
