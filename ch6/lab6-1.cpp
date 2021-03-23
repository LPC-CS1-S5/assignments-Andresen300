
#include <iostream>

using namespace std;

int inputValidate (int, int);
void getListprime(int, int);

int main()
{
    int begin, end;
    int res;

    do
    {cout <<"Enter your two inputs\n";
    cin >> begin >> end;
    }
    while (inputValidate( begin, end));
    //if (res == 0)
      //  exit(0);
    getListprime(begin, end);
}


/* Value returning function inputValid
Task:   check user input, positive numbers only, begin mast be smaller than end.
Return: 0 if numbers are not good and  1 if the range meets the criteria.*/

int inputValidate ( int begin, int end)
{
    if (begin > end || end < 0 || begin < 0)
        return 1;
    else
        return 0;
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