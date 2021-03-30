
//Make the program that swap the three values.
#include <iostream>
#include <iomanip>
using namespace std;

void getinput(int &,int &,int &);
void swap (int &, int &, int &);


int main ()
{
    int n1, n2, n3;

    getinput (n1,n2,n3);

    cout << "Befor Swap "<<setw(5)<<n1<<setw(5)<< n2<<setw(5)<<n3<<endl;

    swap ( n1,n2,n3);

    cout << "After Swap "<<setw(5)<<n1<<setw(5)<< n2<<setw(5)<<n3<<endl;
}

// function definition getinput
// The parameter n1, n2, n3 are a reference variable. The user is ask to enter
// each number. the number gets stored in n1, n2, n3.

void getinput(int &n1, int &n2, int &n3)
{
    cout << "Enter numbers: \n";
    cin >> n1 >> n2 >> n3;
}

// function definition swap
// The parameter n1, n2, n3 are reference variable. They get to swaped n3,n1, n2 and stored in n1, n2, n3 with different values.

void swap(int &n1, int &n2, int &n3)
{
   int temp;
   temp = n1;
   n1 = n3;
   n3 = n2;
   n2 =temp;
}
