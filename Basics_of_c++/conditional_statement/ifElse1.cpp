//program to find given no : odd or even 
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }
    return 0;
}