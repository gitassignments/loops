#include <iostream>
using namespace std;
int PerfectNumber(int f) {
    int sum = 0;
    for (int i = 1; i <= f / 2; ++i) {
        if (f % i == 0) {
            sum += i;  
        }
    }
    if (sum==f) {
        return 1;  
    }

    return 0; 
}
int main() {
    int f;
    cout<< "Enter a number: ";
    cin>>f;

    if (PerfectNumber(f)) {
        cout <<f<< " is a perfect number." <<endl;
    } else {
        cout <<f<< " is not a perfect number." <<endl;
    }

    return 0;
}