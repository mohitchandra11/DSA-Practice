#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
     int count=1;

     cout<<"Enter the value of n"<<endl;
     cin>>n;

     for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }cout<<endl;
     }
        return 0;
}