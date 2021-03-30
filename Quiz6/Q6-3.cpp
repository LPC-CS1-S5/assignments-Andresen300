
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Function prototypes
void getRandnum(int &n1, int &n2, int &n3);
int findMin(int , int , int);
void printResult(int n1, int n2,int n3, int min);


int main()
{
    int n1,n2,n3,min;

    getRandnum(n1,n2, n3);
    min=findMin(n1,n2,n3);
    printResult(n1,n2, n3, min);
    return 0;
}

//Function definition
// Generate three random numbers and pass them by reference.
void getRandnum (int &n1, int &n2, int &n3)
{
  unsigned seed = time(0);
  srand (seed);
  n1 = rand() % 100;
  n2 = rand() % 100;
  n3 = rand() % 100;

}

//value returning function
// it finds a min among 3 numbers and returns min
int findMin(int n1, int n2, int n3)
{
  int m;
  m = n1;
  if (m > n2)
    m = n2;
  if (m > n3)
    m = n3;
  return m;

}

//get the variables values from previos functions. pass by value parameters.
// print
void printResult (int n1, int n2,int n3, int min)
{
    cout << "The 3 random numbers are: \n";
    cout << n1<< " "<<n2 << " " << n3 << " "<<endl;
    cout << "The min is: "<< min<< endl;
}
