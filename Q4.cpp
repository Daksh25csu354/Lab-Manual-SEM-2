#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, totalAmount, discount, finalAmount;

    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    totalAmount = quantity * unitPrice;
    discount = 0.20 * totalAmount;
    finalAmount = totalAmount - discount;

    cout << "\nItem Number: " << itemNo << endl;
    cout << "Total Amount: " << totalAmount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Bill Amount: " << finalAmount << endl;

    return 0;
}