//P5-4
#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
    int values;
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;

    cout << "Please enter a non-zero, positive value: ";
    cin >> values;
    // replace number value for input value
    while (values > 0) {
        num8 = values % 10;
        cout << "Number 8 is " << num8 << endl;
        num7 = (values / 10) % 10;
        cout << "Number 7 is " << num7 << endl;
        num6 = (values / 100) % 10;
        cout << "Number 6 is " << num6 << endl;
        num5 = (values / 1000) % 10;
        cout << "Number 5 is " << num5 << endl;
        num4 = (values / 10000) % 10;
        cout << "Number 4 is " << num4 << endl;
        num3 = (values / 100000) % 10;
        cout << "Number 3 is " << num3 << endl;
        num2 = (values / 1000000) % 10;
        cout << "Number 2 is " << num2 << endl;
        num1 = (values / 10000000) % 10;
        cout << "Number 1 is " << num1 << endl;
    }

    // sum of every even number
    int even;
    even = num8 + num6 + num4 + num2;
    cout << "Sum of even numbers is " << even << endl;

    // double and add every odd number
    int odd;
    odd = (num7 * 2) + (num5 * 2) + (num3 * 2) + (num1 * 2);
    cout << "Sum of odd numbers is " << odd << endl;

    // Add sums of both even and odd numbers together
    int sum;
    sum = even + odd;
    cout << "The sum of both is " << sum << endl;

    
}