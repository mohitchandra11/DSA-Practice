#include<iostream>
using namespace std;

int main()
{
    int row;
    int col;
    cout<<"Enter the value for row and column"<<endl;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1||i==row||j==1||j==col)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}