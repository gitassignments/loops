#include <iostream>
using namespace std;
int main() {
    int f;
    cout<<"Enter a number: "<<endl;
    cin>>f;
    int num=2;
    while (num<=f) {
     int prime_num = 1;
     int i=2;
     while(i*i<=num) {
        if(num%i==0) {
            prime_num=0;
            break;
        }
        ++i;
     } if(prime_num) {
        cout<<num<<" ";
     }
     ++num;
    }

     cout<<endl;
return 0;
}
