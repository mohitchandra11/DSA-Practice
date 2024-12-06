#include<iostream>
using namespace std;

int main()
{ 
    int num;
    cout<<"Enter the number"<<endl;
    cin>> num;
    while(num >0)
    {
        cout<<num<<" is a positive integer"<<endl;
        cin>>num;
    }

    return 0;
}