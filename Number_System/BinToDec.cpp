#include<iostream>
using namespace std;

int BinToDec(int BinNum){
    int ans=0;
    int pow=1;
    while(BinNum>0){
        int rem=BinNum%10;
        ans +=(rem*pow);
        BinNum/=10;
        pow*=2; 
        }
    return ans;
}
int main(){

int BinNum;
    cout<<"Enter a binary number which you want to convert in decimal"<<endl;
    cin>>BinNum;
    cout<<"The decimal number of "<<BinNum << " is " << BinToDec(BinNum)<<endl;
    return 0;
}