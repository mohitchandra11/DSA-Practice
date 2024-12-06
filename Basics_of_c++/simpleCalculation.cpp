// program to implement simple calculator  using swich statement
#include<iostream>
using namespace std;

int main()
{ 
    float a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

   /*float sum;
    sum=a+b;
    float subtract;
    subtract=a-b;
    float product;
    product=a*b;
    float division;
    division=a/b;*/

    char op;
    cout<<" Enter your operator (+,-,*,/)"<<endl;
    cin>>op;

if(a>b){
    switch (op)
    {
         case '+':
         cout<<a+b<<endl;
         break;
         case '-':
         cout<<a-b;
         break;
         case '*':
         cout<<a*b;
         break;
         case '/':
         cout<< a/b;
         break;


         default:
         cout<<"Fill a valid entry";
         break;
    }}
    else

    {
        switch (op)
    {
         case '+':
         cout<<a+b<<endl;
         break;
         case '-':
         cout<<"-"<<b-a;
         break;
         case '*':
         cout<<a*b;
         break;
         case '/':
         cout<< b/a;
         break;


         default:
         cout<<"Fill a valid entry";
         break;
    }
    }
    return 0;
}