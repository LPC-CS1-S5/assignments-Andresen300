
//to understand reference variable as a return value of a function
#include <iostream>
using namespace std;

int &retaddr()
{
    static int x=10;
    return x;
    
}
int main()
{
    int &ref = retaddr();
    ref = 50;
    cout << retaddr()<< endl;
    return 0;
}
