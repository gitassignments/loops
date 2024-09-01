#include <iostream>
using namespace std;
int main() {
    int n;
  cout<<"Enter a positive integer: ";
  cin>>n;
    int sum=0;
    
    for (int i= n; i > 0; i/= 10) {
        int digitsOfNum = i % 10;  
        sum += digitsOfNum;           
    }

    cout<< "The sum of the digits is: " << sum << endl;

    return 0;
}