#include <iostream>
using namespace std;

// Pass by Value: Operates on a copy of the data
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Changes stay within this scope
}

// Pass by Reference: Operates on the original memory locations
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    // Changes affect the original variables in main()
}

int main() {
    int x, y;
    cout << "Enter two integers (a and b): ";
    cin >> x >> y;

    int originalX = x;
    int originalY = y;

    // Attempt 1: Swap by Value
    swapByValue(x, y);
    cout << "After swapByValue: " << x << " " << y << " (No change)" << endl;

    // Attempt 2: Swap by Reference
    swapByReference(x, y);
    cout << "After swapByReference: " << x << " " << y << " (Values swapped)" << endl;

    return 0;
}