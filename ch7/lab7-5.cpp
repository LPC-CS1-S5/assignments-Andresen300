#include <iostream>
#include <iomanip>

using namespace std;

void shiftleft(int[],int, int);
void shiftleftone(int[], int);
void printout(int[],int);


const int SIZE=10;

int main()
{

    int shiftcount;
    int num[SIZE] ={0,1,2,3,4,5,6,7,8,9};

    cout << "Enter your number for circular shift left\n";
    cin >> shiftcount;

    printout (num, SIZE);
    shiftleft ( num, shiftcount, SIZE);
    printout (num, SIZE);
}

void shiftleft (int num[], int shifcount, int SIZE)
{
    for (int i=0; i < shifcount; i++)
        shiftleftone(num, SIZE);
}
void shiftleftone (int num[], int size)
{
    int tmp = num[0];
    for (int i=0; i<SIZE-1; i++)
    {
        num[i]=num[i+1];
    }
    num[SIZE-1]= tmp;
}
void printout(int numbers[], int size)
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << setw(3) << numbers[i];
    }
    cout << endl;
}











