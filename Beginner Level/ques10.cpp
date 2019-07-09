#include <iostream>
using namespace std;
int main()
{
    int number,split,count=0;
    cin>>number;
    while(number>0)
    {
        split=number%10;
        count++;
        number=number/10;
    }
    cout<<count;
    return 0;
}
