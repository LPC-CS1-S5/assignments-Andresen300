
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//Functions prototype
void makearray (int[], int);
void makemask (int[], int);
void applymask (int[], int [],int);
void printout (int [], int);

int main()
{
    const int SIZE = 8;
    int numbers[SIZE];
    int mask [SIZE];

    makearray(numbers, SIZE);
    printout ( numbers , SIZE);
    makemask(mask, SIZE);
    printout ( mask , SIZE);
    applymask (numbers,mask, SIZE);
    printout (numbers, SIZE);
}
void makearray (int numbers[], int SIZE)
{
    srand(time(0));
    for(int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand () % 20;
    }
}
void makemask(int mask[], int SIZE)
{
    for (int i=0; i < SIZE; i++)

    {
        mask[i]=rand()% 2;
    }
}
void applymask(int numbers[], int mask[], int SIZE)
{
    for (int i=0; i < SIZE; i++)
    {
        numbers[i]=(mask[i] && numbers[i])? numbers[i]: 0;
    }
}

void printout(int numbers[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << setw(5) << numbers[i];
    }
    cout << endl;
}
