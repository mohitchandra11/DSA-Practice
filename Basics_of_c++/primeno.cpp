#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter the number "<< endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
      if(n%i==0){
        cout<<"The number is not Prime"<<endl;
        break;
       }
    }
    if(i==n)
    {
        cout <<"prime number"<< endl;
    }

    return 0;
}