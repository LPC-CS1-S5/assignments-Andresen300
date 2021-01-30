#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    // Set up variables

    double meal_price = 88.67;      //Total charge for the meal
    double meal_tax_percent = 0.0675;// 6.75 % tax on meal cost
    double meal_tip_percent = 0.2;  //20% tip of the total after adding the tax

    // To calculate

    double meal_tax = meal_price * meal_tax_percent;     // to calculate the amount of  tax on a meal
    double meal_and_tax = meal_price + meal_tax;         // to add amount of tax to the meal
    double meal_tip = meal_and_tax * meal_tip_percent;     // to calculate the tip on the total after adding the tax
    double meal_total = meal_tip + meal_tax + meal_price;  // to calculate the the grand total

    // Display

    cout << setprecision(2)<< fixed;
    cout << " A meal cost: $ " << meal_price<< endl;
    cout << " Tax amount: $ " << meal_tax << endl;
    cout << " Tip amount: $ " << meal_tip << endl;
    cout << " Meal total: $ " << meal_total << endl;

    return 0;

}
 