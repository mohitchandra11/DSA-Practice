/*
1
0 1
1 0 1
0 1 0 1 
1 0 1 0 1 
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int count=1;
    cout<<"Enter n"<<endl;
    cin>>n;
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
        {
          if((i+j)%2==0)    
          {
            cout<<"1"<<" ";
          }
          else{
            cout<<"0"<<" ";
          }
        }cout<<endl;
        
     }
    return 0;
}