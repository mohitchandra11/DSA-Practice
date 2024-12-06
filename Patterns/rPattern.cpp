/*
program to print a rectengle pattern 
* * * * 
* * * * 
* * * * 
* * * * 
* * * * 

*/
#include<iostream>
using namespace std;

int main()
{
   int row,colm;
   cout<<"Enter the value for row and column "<<endl;
   cin>>row>>colm;
   for(int i=1;i<=row;i++)
   {
    for(int j=1;j<=colm;j++)
    {
        cout<<" * ";
    }
    cout<<endl;
   }
    return 0;
}