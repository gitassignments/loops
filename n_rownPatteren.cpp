#include <iostream>
using namespace std;
void print(int f) {
    for (int i = 1; i <= f; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout<< j << " "; 
        }
        cout<< endl;
    }
}
int main() {
    int f;
    cout << "Enter the number of rows: ";
    cin >> f;

    print(f);

    return 0;
}