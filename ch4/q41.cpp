//Victoria Andresen
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int choice;
    double radius,
           area,
           length,
           width,
           base,
           height;
    const double PI = 3.14159;

    // Constants for menu choices
    const int AREA_CIRCLE = 1,
              AREA_RECTANGLE = 2,
              AREA_TRIANGLE = 3,
              QUIT = 4;

    // Display the menu and get a selection
    cout << "\tGeometry Calculator\n";
    cout << " 1. Calculate the Area of a Circle\n";
    cout << " 2. Calculate the Area of a Rectangle\n";
    cout << " 3. Calculate the Area of a Triangle\n";
    cout << " 4. Quit\n";
    cout << " Enter your choice (1-4)\n";
    cin >> choice;

    // Set the numeric output
    cout << fixed << setprecision(2) << showpoint;

    // Respond to the user's menu selection

    switch(choice)
    {
        case AREA_CIRCLE:
             cout << "Enter the radius of the circle: \n";
             cin >> radius;
             area = PI * radius * radius;
             cout << "The area of a circle is " << area << endl;
             break;
        case AREA_RECTANGLE:
             cout << "Enter the length and width of the rectangle: \n";
             cin >> length >> width;
             area = length * width;
             cout << "The area of a rectangle " << area << endl;
             break;
        case AREA_TRIANGLE:
             cout << "Enter triangle's base and height: \n";
             cin >> base >> height;
             area = base * height * 0.5;
             cout << "The area of a triangle is " << area << endl;
             break;
        case QUIT:
             cout << "Okay than, good buy.";
             break;
        default:
            cout << "The valid choices are 1-4. Try again. \n";
    }
    return 0;

}
