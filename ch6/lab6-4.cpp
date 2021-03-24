// Find the summation of the list numbers except the min and max
#include <iostream>
using namespace std;

int getsum(int n);

int main()
{
    int n;
    int sum;

    cout << "Enter the number of input (n)";
    cin >> n;
    sum = getsum(n);
    cout << sum << endl;

}

/* value returning function getsum(n)
Task:   get the user input for n number of elements.
        find min and max.
        calculate the accumalative sum without min and max.
Return: sum */

int getsum(int n)
{
    int addnums = 0;
    int min = 20000000, max = 0;
    int num;
    int subMinMax;           // Subtract min and max from the sum of numbers.

    for (int i = 0; i < n; i++)
    {
         cout << "Enter positive numbers you want to add\n";
         cin >> num;
         
         if ( num < min)
             min = num;
          
         if (num > max)
            max = num;
            
         addnums+= num;
    }
         subMinMax = addnums - min - max;
         return subMinMax;

}
