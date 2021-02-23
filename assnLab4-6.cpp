#include <iostream>

using namespace std;

int main()
{
    int selection;

    //Constants for formula choices
    const int   AREA_CIRCLE = 1,
                AREA_RECTANGLE = 2,
                AREA_CYLINDER = 3,
                NONE = 4;
    // Display the menu and get a choice.
    cout << "\tChoose the formula you want to see.\n";
    cout << "1. Area of a circle\n";
    cout << "2. Area of  rectangle\n";
    cout << "3. Area of cylinder\n";
    cout << "4. None of them.\n";
    cout << "Enter your selection\n";
    cin >> selection;


    // Respond to the user's menu selection.
    switch (selection)
    {
        case AREA_CIRCLE:
             cout << "Pi times radius squared\n";
             break;
        case AREA_RECTANGLE:
             cout << "Length times width\n";
             break;
        case AREA_CYLINDER:
             cout << "Pi times radius squared times height\n";
             break;
        case NONE:
             cout << "Well okay then, good bye.\n";
             break;
        default:
            cout << "The valid choices are 1-4. Run the program again.\n";
    }
    return 0;
}
