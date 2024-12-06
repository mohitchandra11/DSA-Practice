#include<iostream>
using namespace std;


void SumAndProduct(int arr[],int size){
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    
cout<<"sum is "<<sum<< " and product is "<<product<<endl;
}
int main(){
    int arr[]={12,43,23,45,6};
    int size= sizeof(arr)/sizeof(int);
    SumAndProduct(arr,size);
    return 0;
}