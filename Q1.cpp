#include<iostream>
using namespace std;
int main() {
    int number;
    int sum;
    int i = 0;
    for(i = 0; i<3; i++) {
        cin >> number;
        sum = sum+number;
    }
    cout << sum/3;
    return 0;
}