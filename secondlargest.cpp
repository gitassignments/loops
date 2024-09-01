#include <iostream>
using namespace std;

int SecondLargestElement(int f[], int size) {
    int largest = f[0];
    int secondLargest = f[0];
    for (int i = 1; i < size; ++i) {
        if (f[i] > largest) {
            secondLargest = largest; 
            largest = f[i];
        } else if (f[i] > secondLargest && f[i] != largest) {
            secondLargest = f[i];
        }
    }
    if (secondLargest == largest) {
        cout << "No second largest element found" <<endl;
        return -1;  
    }

    return secondLargest;
}

int main() {
    int f[] = {5,4,7,499,22,88,846};
    int size = sizeof(f) / sizeof(f[0]);

    int secondLargest = SecondLargestElement(f, size);

    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest <<endl;
    }

    return 0;
}