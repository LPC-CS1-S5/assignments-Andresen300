#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

void makearray(int[], int);
void printout(int[],int);
void swapfold(int[], int);
void sumfold(int[],int[], int);
void equalfold( int [], int[], int);

const int SIZE=8;

int main()
{
    int numbers[SIZE];
    int sum [SIZE/2];
    int equal [SIZE/2];

    makearray (numbers, SIZE);
    printout (numbers, SIZE);

    swapfold (numbers, SIZE);
    cout << "   After the swap "<<endl;
    printout ( numbers, SIZE);

    sumfold(numbers,sum, SIZE);
    cout << "   Sum of numbers from the numbers array "<< endl;
    printout(sum, SIZE);

    equalfold  (numbers, equal, SIZE);
    printout (equal, ceil(SIZE/2.0));
}

void makearray (int numbers[], int size)
{
    srand(time(0));
    for(int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand () % 20;
    }
}
void printout(int numbers[], int size)
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << setw(5) << numbers[i];
    }
    cout << endl;
}
void swapfold(int numbers [], int size)
{
    for (int i=0; i<SIZE/2; i++)
    {
        swap(numbers[i], numbers[SIZE-1-i]);
    }
}

void sumfold(int numbers [],int sum[], int size)
{
    for (int i = 0; i  < SIZE/2; i++)
    {
        sum[i]= numbers[i]+numbers[SIZE-1-i];
    }

}

void equalfold (int numbers [],int equal[], int size )
{
    for (int i = 0; i  < SIZE/2; i++)
    {
        equal[i]=(numbers[i] == numbers[SIZE-1-i])? 1: 0;

    }
}









