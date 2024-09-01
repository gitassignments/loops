#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;
    do {
        cout << "Enter a number (Enter a negative number to stop): ";
        cin >> num;

        if (num >= 0) {
            sum += num;  
        }

    } while (num >= 0);  

    cout << "The sum of all entered numbers is: " << sum <<endl;

    return 0;
}