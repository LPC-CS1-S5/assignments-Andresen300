
// regular_price = 59.95
// discount_amount = regular_price X 0.2
// sales_price = regular_price - discount_amount



#include <iostream>
using namespace std;

int main()
{
    double reqularPrice =59.95;
    double discount_amount = reqularPrice * .2;
    double salesPrice = reqularPrice -discount_amount;

    cout << "Regular price: $ "<< reqularPrice << endl;
    cout << "Discount amount: $ " << discount_amount<<endl;
    cout << "Sale price: $ "<< salesPrice << endl;
    return 0;
    

    
}