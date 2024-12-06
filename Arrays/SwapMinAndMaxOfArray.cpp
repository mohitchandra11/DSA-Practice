#include<iostream>
#include<climits>
using namespace std;
void SwapMinAndMax(int arr[],int size){
    int min1=INT_MAX,max1=INT_MIN;
    int min_i, max_i;
    for(int i=0;i<size;i++){
       min1=min(arr[i],min1);
       max1=max(arr[i],max1);
       if(min1==arr[i]){
        min_i=i;
       }
       if(max1==arr[i]){
        max_i=i;
       }
    }
  
    swap(arr[min_i],arr[max_i]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12,45,7,1};
    int size=sizeof(arr)/sizeof(int);
    SwapMinAndMax(arr,size);

    return 0;
}