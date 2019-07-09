#include <iostream>
using namespace std;
int main() {
    int number,r,sum=0;
    cin>>number;
    while(number>0)
    {
        r=number%10;
        sum=sum+r;
        number=number/10;
    }
    cout <<sum;
}
