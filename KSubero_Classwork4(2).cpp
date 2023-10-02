/*
*Class: CMSC140 21909
*Instructor: Grigoriy Grinberg
*Classwork4(2)
*Description: Using Switch Function to determine cost by number of colors.
*Due Date: 10/02/23
*I pledge that I have completed the programming assignment independently.
* I have no copied the code from a student or any source.
* Print your Name here: Keiffer Subero
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;
int main()

{
    int numberOfColors = 0;
    double basePrice = 0;
    double finalPrice = 0;
    char lightChoice = 'n';
    char removeChoice = 'n';

    const int COLORS_1 = 250,
        COLORS_2 = 325,
        COLORS_3 = 450,
        COLORS_4 = 625,
        COLORS_5 = 850;

    cout << "Enter the numbers of colors in the sign: ";
    cin >> numberOfColors;

    if (numberOfColors < 1)
    {
        cout << "Invalid number of colors; it must be greater than zero.\n";
    }

    if (numberOfColors > 0)
    {
        switch (numberOfColors)
        {
        case 1:
            basePrice += COLORS_1;
            cout << "Do you want a lighted sign(y/n)? ";
            cin >> lightChoice;
            if (lightChoice == 'y' && removeChoice == 'n')
            {
                finalPrice += basePrice + (basePrice * .25);
            }
            cout << "Do you need an old sign removed(y/n)? ";
            cin >> removeChoice;
            if (lightChoice == 'n' && removeChoice == 'y')
            {
                finalPrice += basePrice + (basePrice * .1);
            }
            if (lightChoice == 'n' && removeChoice == 'n')
            {
                finalPrice += basePrice + (0);
            }
            if (lightChoice == 'y' && removeChoice == 'y')
            {
                finalPrice = (basePrice * 1) + (basePrice * .25) + (basePrice * .1);
            }
            cout << setprecision(2) << fixed << "The price is: $" << finalPrice << endl;
            break;

        case 2:
            basePrice += COLORS_2;
            cout << "Do you want a lighted sign(y/n)? ";
            cin >> lightChoice;
            if (lightChoice == 'y' && removeChoice == 'n')
            {
                finalPrice += basePrice + (basePrice * .25);
            }
            cout << "Do you need an old sign removed(y/n)? ";
            cin >> removeChoice;
            if (lightChoice == 'n' && removeChoice == 'y')
            {
                finalPrice += basePrice + (basePrice * .1);
            }
            if (lightChoice == 'n' && removeChoice == 'n')
            {
                finalPrice += basePrice + (0);
            }
            if (lightChoice == 'y' && removeChoice == 'y')
            {
                finalPrice = (basePrice * 1) + (basePrice * .25) + (basePrice * .1);
            }
            cout << setprecision(2) << fixed << "The price is: $" << finalPrice << endl;
            break;

        case 3:
            basePrice += COLORS_3;
            cout << "Do you want a lighted sign(y/n)? ";
            cin >> lightChoice;
            if (lightChoice == 'y' && removeChoice == 'n')
            {
                finalPrice += basePrice + (basePrice * .25);
            }
            cout << "Do you need an old sign removed(y/n)? ";
            cin >> removeChoice;
            if (lightChoice == 'n' && removeChoice == 'y')
            {
                finalPrice += basePrice + (basePrice * .1);
            }
            if (lightChoice == 'n' && removeChoice == 'n')
            {
                finalPrice += basePrice + (0);
            }
            if (lightChoice == 'y' && removeChoice == 'y')
            {
                finalPrice = (basePrice * 1) + (basePrice * .25) + (basePrice * .1);
            }
            cout << setprecision(2) << fixed << "The price is $" << finalPrice << endl;
            break;

        case 4:
            basePrice += COLORS_4;
            cout << "Do you want a lighted sign(y/n)? ";
            cin >> lightChoice;
            if (lightChoice == 'y' && removeChoice == 'n')
            {
                finalPrice += basePrice + (basePrice * .25);
            }
            cout << "Do you need an old sign removed(y/n)? ";
            cin >> removeChoice;
            if (lightChoice == 'n' && removeChoice == 'y')
            {
                finalPrice += basePrice + (basePrice * .1);
            }
            if (lightChoice == 'n' && removeChoice == 'n')
            {
                finalPrice += basePrice + (0);
            }
            if (lightChoice == 'y' && removeChoice == 'y')
            {
                finalPrice = (basePrice * 1) + (basePrice * .25) + (basePrice * .1);
            }
            cout << setprecision(2) << fixed << "The price is: $" << finalPrice << endl;
            break;

        case 5:
            basePrice += COLORS_5;
            cout << "Do you want a lighted sign(y/n)? ";
            cin >> lightChoice;
            if (lightChoice == 'y' && removeChoice == 'n')
            {
                finalPrice += basePrice + (basePrice * .25);
            }
            cout << "Do you need an old sign removed(y/n)? ";
            cin >> removeChoice;
            if (lightChoice == 'n' && removeChoice == 'y')
            {
                finalPrice += basePrice + (basePrice * .1);
            }
            if (lightChoice == 'n' && removeChoice == 'n')
            {
                finalPrice += basePrice + (0);
            }
            if (lightChoice == 'y' && removeChoice == 'y')
            {
                finalPrice = (basePrice * 1) + (basePrice * .25) + (basePrice * .1);
                cout << setprecision(2) << fixed << "The price is: $" << finalPrice << endl;
            }
            break;

        default:
            if (numberOfColors > 5)
            {
                numberOfColors = 5;
            }
            basePrice += COLORS_5;
            cout << "Do you want a lighted sign(y/n)? ";
            cin >> lightChoice;
            if (lightChoice == 'y' && removeChoice == 'n')
            {
                finalPrice += basePrice + (basePrice * .25);
            }
            cout << "Do you need an old sign removed(y/n)? ";
            cin >> removeChoice;
            if (lightChoice == 'n' && removeChoice == 'y')
            {
                finalPrice += basePrice + (basePrice * .1);
            }
            if (lightChoice == 'n' && removeChoice == 'n')
            {
                finalPrice += basePrice + (0);
            }
            if (lightChoice == 'y' && removeChoice == 'y')
            {
                finalPrice = (basePrice * 1) + (basePrice * .25) + (basePrice * .1);
            }
            cout << setprecision(2) << fixed << "The price is: $" << finalPrice << endl;
            break;
        }
    }
    return 0;
}