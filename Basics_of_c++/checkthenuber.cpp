// program to check the number is divisible by between 1 to 11 .

#include<iostream>
using namespace std;

int main()
{
  int num;
  int i;
    cout<<"Enter a number "<<endl;
    cin>>num;
   for( i=2;i<=11;i++)
    {
        while(num%i==0)
            {
                cout<<"The number is divisible by "<<i<<endl;
                i=i+1;
            }
    }
   
  
    return 0;
}

//self developing program but I couldn't print the message if number is not divisible by anyone between 2 to 11;
