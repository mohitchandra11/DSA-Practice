#include<iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int n;

    cout<< "Enter n"<<endl;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;

    }
    return 0;
}