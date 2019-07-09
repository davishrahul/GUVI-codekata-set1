#include <iostream>
using namespace std;
int main(){
    int i,number,sum=0,input;    
    cin>>number;
    int numArray[number];
    cin>>input; 
    for(i=0;i<number;i++){
        numArray[i]=i+1;
        }
     for(int j=0;j<input;j++)
       {
         sum=sum+numArray[j];
       } 
     cout<<sum;    
    return 0;
}
