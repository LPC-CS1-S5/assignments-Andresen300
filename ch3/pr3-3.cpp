#include <iostream>

using namespace std;

int main()
{
  float c,f;

  cout << "Enter the temperature by Celcius: ";
  cin >> c;

  f = 9/5.0*c+32;

  cout << "Celcius "<< c << " is "<< f << " Fahrenheit.\n";
  return 0;

}