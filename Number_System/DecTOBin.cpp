#include<iostream>
using namespace std;

int DecToBin(int decNum){
int ans =0;
int pow=1;
while(decNum>0){
    int rem= decNum%2;
    decNum=decNum/2;
    
    ans=ans+(rem*pow);
    pow*=10;
}
return ans;
}
int main (){
    int DecNum;
    cout<<"Enter a decimal number which you want to convert in binary"<<endl;
    cin>>DecNum;
    cout<<"The binary number of "<<DecNum << " is " << DecToBin(DecNum)<<endl;
    return 0;
}