#include <iostream>
using namespace std;

int main()
{
    //Declare variables and constant discount rates.
    const double  PERC019 = .2,
                  PERC2049 = .3,
                  PERC5099 = .4,
                  PERC100 = .5;

    double  quantitySold, originalAmount, originalPrice = 99,
            discountAmount, dRate, totalAmount;

    //Input the number of units sold
    cout << "Enter the number of units sold: ";
    cin >>quantitySold;

    if (quantitySold > 0)
    {
        // Chose appropriate  discount rate
        if (quantitySold < 20)
        {
            dRate = PERC019;
        }
        else if (quantitySold < 50)
        {
            dRate = PERC2049;
        }
        else if (quantitySold < 100)
        {
            dRate = PERC5099;
        }
        else if (quantitySold >= 100)
        {
            dRate = PERC100;
        }

        // Calculate and display cost.
        originalAmount = originalPrice * quantitySold;
        discountAmount = originalAmount * dRate;
        totalAmount = originalAmount - discountAmount;


        cout << "Price = " << originalAmount << endl;
        cout << "Discount = " << discountAmount << endl;
        cout << "Total cost = " << totalAmount;

    }
    else
    {
        cout << "Invalid. Quantity can't be negative number.\n";
    }

    return 0;

}
