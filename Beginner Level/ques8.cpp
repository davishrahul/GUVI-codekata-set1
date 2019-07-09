#include <iostream>
using namespace std;
int main() {
    int number,r,sum=0;
    cin>>number;
    if(number>0){
     for(int i=1;i<=number;i++)
        {
            sum=sum+i;
        }
        cout <<sum;
    }
    else
    {
        cout <<"invalid input";
    }
}
