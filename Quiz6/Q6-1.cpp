
// swap two values. int, float overloading Functions
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void swapTwoValues(int &n1, int &n2);
void swapTwoValues (float &f1, float &f2);

int main()
{
    int n1, n2;
    float f1, f2;

    //Get user input
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter two integers \n";
    cin >> n1 >> n2;
    cout <<"Enter two floating point values \n";
    cin >> f1 >>f2;

    cout << "Befor Swap int "<<setw(9)<<n1<<setw(9)<< n2<<endl;
    swapTwoValues( n1,n2);
    cout << "After Swap int "<<setw(9)<<n1<<setw(9)<< n2<<endl;


    cout << "Befor Swap float "<<setw(7)<<f1<<setw(7)<< f2<<endl;
    swapTwoValues( f1,f2);
    cout << "After Swap float"<<setw(7)<<f1<<setw(7)<< f2<<endl;

}
// Definition of overloaded function
// this function uses an reference parameter int n1, n2.
void swapTwoValues ( int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
void swapTwoValues ( float &n1, float &n2)
{
    float temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
