#include <iostream>
using namespace std;

// Function prototypes
void convertLength();
void convertTemperature();
void convertWeight();

int main() {
    int choice;
    do {
        cout << "Unit Converter" << endl;
        cout << "1. Length (Meters to Feet)" << endl;
        cout << "2. Temperature (Celsius to Fahrenheit)" << endl;
        cout << "3. Weight (Kilograms to Pounds)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertTemperature();
                break;
            case 3:
                convertWeight();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 4);

    return 0;
}

void convertLength() {
    double meters;
    cout << "Enter length in meters: ";
    cin >> meters;
    double feet = meters * 3.28084; // Conversion factor
    cout << meters << " meters is " << feet << " feet." << endl;
}

void convertTemperature() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9/5) + 32; // Conversion formula
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
}

void convertWeight() {
    double kilograms;
    cout << "Enter weight in kilograms: ";
    cin >> kilograms;
    double pounds = kilograms * 2.20462; // Conversion factor
    cout << kilograms << " kilograms is " << pounds << " pounds." << endl;
}
