#include <iostream>
using namespace std;

int main() {
    long long number;

    cout << "Enter an integer: ";
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter a whole number." << endl;
        return 1;
    }

    if (number % 2 == 0)
        cout << number << " is Even." << endl;
    else
        cout << number << " is Odd." << endl;

    return 0;
}
