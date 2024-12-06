// program to find the maximum of 3 numbers
#include<iostream>
using namespace std;
 int main()
 {
    int a,b,c;
    cout << "Enter the value of a, b, c"<< endl;
    cin>>a>>b>>c;

    if (a>b)
    {
        if(a>c){
            cout<<a<<" is the gretest number "<<endl;
        }
        else{
            cout<<c<<" is the greatest number "<<endl;
        }
    }
    else 
    {
        if(b>c)
        {
            cout<<b<<" is the greatest number "<<endl;
        }
        else{
            cout<<c<<" is the greatest number "<<endl;
        }
    }

    return 0;
 }