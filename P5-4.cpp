//P5-4
#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
    int values;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int num7 = 0;
    int num8 = 0;

    cout << "Please enter a non-zero, positive value: ";
    cin >> values;
    // replace number value for input value
    if (values > 0) {
        num8 = values % 10;
        num7 = (values / 10) % 10;
        num6 = (values / 100) % 10;
        num5 = (values / 1000) % 10;
        num4 = (values / 10000) % 10;
        num3 = (values / 100000) % 10;
        num2 = (values / 1000000) % 10;
        num1 = (values / 10000000) % 10;
    }

    // sum of every even number
    int even;
    even = num8 + num6 + num4 + num2;

    // double and add every odd number
    int odd;
    odd = ((num7 * 2) + (num5 * 2) + (num3 * 2) + (num1 * 2)) / 2;

    // Add sums of both even and odd numbers together
    int sum;
    sum = even + odd;
    
    if ( sum % 2 == 0) {
        cout << "Card is valid" << endl;
    }
    if (sum % 2 >> 0) {
        cout << "Card is not valid" << endl;
    }
return 0;
}
