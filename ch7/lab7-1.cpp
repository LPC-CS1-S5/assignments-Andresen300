#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//Functions prototype
void makearray (int[], int);
void bubble (int[], int);
void printout (int [], int);

int main()
{
    const int SIZE = 8;
    int numbers[SIZE];
    int largers;

    makearray(numbers, SIZE);
    printout ( numbers , SIZE);
    bubble(numbers, SIZE);
    cout << "Numbers after the bubble sort :"<< endl;
    printout (numbers, SIZE);
}
// makearray is a function that accepts an array numbers and its size as an
// arquments. it generates randome numbers which are stored in the array numbers.
void makearray (int numbers[], int SIZE)
{
    srand(time(0));
    for(int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand () % 20;
    }
}

//the function printout accepts an array of integers and array size as its argument
// it displays the content of the array numbers.
void printout(int numbers[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << numbers[i]<< " ";
    }
    cout << endl;
}
// the function accepts an array of integers and size as its arqument
// it sort the numbers in the the array. the lagers number will be at the end.
void bubble(int numbers[], int SIZE)
{
    int tmp=0;
    for(int j = 0; j < SIZE-1; j++)
    {

    for (int i = 0; i < SIZE-1; i++)
    {
        if(numbers[i]> numbers[i+1])
        {
            swap(numbers[i], numbers[i+1]);
        }
    }
    }
}
