#include<iostream>
using namespace std;

void ReversedArray(int arr[],int size){
int left =0;
int right =size-1;
for(int i=0;i<size;i++){
while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;

}
cout<<arr[i]<< " ";
}

}
 int main(){    
    int arr[]={12,3,5,6};
    int size= sizeof(arr)/sizeof(int);
    ReversedArray(arr,size);
    return 0;
 }