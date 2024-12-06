 //for(initialisation;condition;update)
 #include<iostream>
 using namespace std;

 int main()
 {  int n;
 cout <<"enter the value for n"<<endl;
 cin>>n;
 float sum=0;
 float avr;
   for(int count=1; count<=n;count++)
   {
     sum=sum+count;
   }
   cout<<"the sum is "<<sum<<endl;
   avr=sum/n;
   cout<<"the avarage is "<<avr<<endl;
    return 0;
 }