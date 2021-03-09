
/*Make a program that find the prime numbers in the given range.
example) find the prime numbers in the range [1..100]
2, 3, 5, 7, ... , 97*/

#include <iostream>
using namespace std;

int main()
{
    int prime = -200000000, start, finish;

    cout << "Enter tow numbers and i will tell you all the prime numbers\n";
    cin >> start >> finish;

    if (prime < start)
    {
        prime == 2;
        cout <<"2"<< " ";
    }

        for (prime=3; prime < finish; prime++)
        {
            if  ( prime % 2 == 1)
                    {
                        cout <<prime << " ";
                    }
        }

}
