#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int d1,d2, d3;

unsigned seed = time(0);
srand (seed);

d1= rand();
d2= rand();
d3= rand();
cout <<setprecision(5) << d1 << endl;
cout <<setprecision(5)<< d2 << endl;
cout << setprecision(5)<< d3 << endl;

    return 0;
}
