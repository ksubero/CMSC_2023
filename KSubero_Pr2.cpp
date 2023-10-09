/*
*Class: CMSC140 21909
*Instructor: Grigoriy Grinberg
*Project2
*Description: Creating a toolkit using switch function.
*Due Date: 10/09/23
*I pledge that I have completed the programming assignment independently.
* I have no copied the code from a student or any source.
* Print your Name here: Keiffer Subero
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

string countryName;
int kitSelection;

class TemperatureConverter {
public:
    double degreesCelsius;
    double degreesFahrenheit;
    void convert() {
        cout << "Please enter temperature in Celsius (such as 10):  ";
        cin >> degreesCelsius;
        if (degreesCelsius > 0) {
            degreesFahrenheit = (((9.0 / 5.0) * degreesCelsius) + 32.0);
            cout << "Temperature in Fahrenheit: " << fixed << setprecision(0) << degreesFahrenheit << "\n" << endl;
        }
        else {
            cout << "Temperature must be greater than zero.  Run program again using valid input.\n" << endl;
        }
    }
};

class DistanceConverter {
public:
    double distanceKilometer;
    double distanceMile;

    void convert() {
        cout << "Please enter distance in Kilometers (such as 15.25): " << endl;
        cin >> distanceKilometer;
        if (distanceKilometer > 0) {
            distanceMile = (distanceKilometer * 0.6);
            cout << "Distance in Miles: " << fixed << setprecision(2) << distanceMile << "\n" << endl;
        }
        else {
            cout << "Distance must be a positive number, run program again using valid input.\n" << endl;
        }
    }
};

class WeightConverter {
public:
    double weightKilogram;
    double weightPound;

    void convert() {
        cout << "Please enter weight in Kilograms (such as 20.1): " << endl;
        cin >> weightKilogram;
        if (weightKilogram > 0) {
            weightPound = (weightKilogram * 2.2);
            cout << "Weight in Pounds: " << fixed << setprecision(1) << weightPound << "\n" << endl;
        }
        else {
            cout << "Weight must be a positive number, run program again using valid input.\n" << endl;
        }
    }
};

int main()
{
    cout << "Enter country name: ";
    getline(cin, countryName);
    cout << "Converter Toolkit\n"
        << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"
        << "1. Tempurature Converter\n"
        << "2. Distance Converter\n"
        << "3. Weight Converter\n"
        << "4. Quit\n\n"
        << "Enter your choice (1-4): ";
    cin >> kitSelection;

    switch (kitSelection) {
    case 1:
        TemperatureConverter temperatureConverter;
        temperatureConverter.convert();
        break;
    case 2:
        DistanceConverter distanceConverter;
        distanceConverter.convert();
        break;
    case 3:
        WeightConverter weightConverter;
        weightConverter.convert();
        break;
    case 4:
        cout << "Program has been successfully quit.\n" << endl;
        break;
    default:
        cout << "Invalid entry, please choose between 1-4.\n" << endl;
    }
    cout << countryName << " sounds fun!\n\n\n";
    cout << "Thank you for testing my program!!\n";
    cout << "Programmer's name: Keiffer Subero\n";
    cout << "CMSC140 Project number: 2\n";
    cout << "Due date: 10/09/23\n";
    return (0);
}