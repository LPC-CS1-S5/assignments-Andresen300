#include <iostream>
using namespace std;

int main ()
{
    // Define the variables
    const float W02 = 1.50,
                W26 = 2.20,
                W610 = 3.70,
                W1020 = 4.80;
    float distance, weight, rate, charge;

    //ask for distance and weigh and validation input
    cout << "Enter the weight of the package: ";
    cin >> weight;
    cout <<"\nEnter the distance: ";
    cin >> distance;

    // input validation for weight
    if (weight > 0 && weight <= 20)
    {
      // input validation for distance
      if (distance > 10 && distance <=3000)
      {
          // select the appropriate rate
          if ( weight < 2)
          {
              rate = W02;
          }
          else if (weight < 6)
          {
              rate = W26;
          }
          else if (weight < 10)
          {
              rate = W610;
          }
          else if (weight <= 20)
          {
              rate = W1020;
          }
          if (distance < 500)
          {
              charge = weight * rate;
          }
          else
          {
              charge = (distance/500)* rate;
          }

          cout << "The total charge for the package with a weight " << weight << "lb and distance " << distance << "mi = $" << charge<< endl;

      }
      else
        cout << "invalid input";
    }
    else
        cout << "invalid input";

    return 0;

}
