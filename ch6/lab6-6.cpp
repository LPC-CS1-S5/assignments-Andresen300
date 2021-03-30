
//Default arguments for the range if not provided by user. find prime numbers.
#include <iostream>
using namespace std;

void getListprime(int begin = 0, int end = 100);

int main()
{
    int begin, end;
    int res;

    cout <<"Enter your two inputs\n";
    cin >> begin >> end;

    if (begin == end)
        getListprime(begin, 100);
    if (begin > end)
        getListprime(0,100);
    if (begin < end)
        getListprime(begin, end);
}

/*Void function
Task: It find the prime numbers in the given range and prints them. parameters are values from the user.*/

void getListprime (int begin , int end)
{
    int i, j;
    for(i = begin; i < end; i++)
    {

        for(j= 2; j<= i; j++)
        {
             if (i % j == 0)
             break;
        }
        if (i == j)
        cout << i << " ";
    }

}
