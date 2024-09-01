#include <iostream>
using namespace std;

int main() {
    int f;
    cout << "Enter a number: ";
    cin >> f;
    int reversed = 0;
    int original = f;
 
    while (f > 0) {
        int digit = f % 10;     
        reversed = reversed * 10 + digit;  
        f /= 10;                  
    }
    cout<< "The reversed number is: " <<reversed<< endl;

    return 0;
}