// Victoria Andresen
/*Write a program that finds the sequence of 2 to power n in the given range.
e.g, if the range = [0, 100], show the list 2, 4, 8. 16. 32, 64*/
#include <iostream>
using namespace std;

int main()
{
    int start,
        endn,
        powernum=1;

    cout << "Enter the range and I will find the sequence of 2 to the power n.\n";
    cin >> start >> endn;

        while ( powernum < endn)
        {
            powernum*=2;

            if (powernum > start && powernum < endn)
            {
                cout<<powernum << endl;
            }
        }

    return 0;

}
