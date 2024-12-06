#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int i,j;
    int space;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
         cout<<"*";
        }
        space =2*n-2*i;
        for(j=1;j<=space;j++)
        {
         cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
         cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
         cout<<"*";
        }
        space =2*n-2*i;
        for(j=1;j<=space;j++)
        {
         cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
         cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}