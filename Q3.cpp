#include<iostream>
using namespace std;
int main() {
    int option;
    float number;
    cout << "Do you want to convert fahrenheit to celsius or vice versa ( 0 for 1st and 1 for 2nd)";
    cin >> option;
    if (option == 0) {
        cout << "Enter temp in Fahrenheit";
        cin >> number;
        cout << (number - 32)/1.8;
    }
    else if(option == 1) {
        cout << "Enter temp in Celsius";
        cin >> number;
        cout << (1.8*number) - 32;
    }
    return 0;
}