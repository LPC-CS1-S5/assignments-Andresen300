#include <iostream>
using namespace std;

int main()
{
    double reqular_wages, overtime_wages,work_hours=50;
    double base_pay_rate = 18.25, overtime_pay_rate=27.78, reqular_hours=40, overtime_hours;
    double total_wages;

    
    reqular_wages = reqular_hours * base_pay_rate;
    overtime_hours= work_hours - reqular_hours;
    overtime_wages = overtime_hours * overtime_pay_rate;
    total_wages = reqular_wages+ overtime_wages;

    cout << "Regular wages " << reqular_wages << endl;
    cout << "Overtime wages " << overtime_wages<< endl;
    cout << "Total wages " << total_wages<< endl;
    return 0;
}
