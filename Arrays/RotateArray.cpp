#include<iostream>
using namespace std;

void RotateArray(int arr[],int d){
  int size = sizeof(arr)/sizeof(int);

  for(int i=0;i<d;i++){
    int first = arr[0];
    for(int j=0;j<size-1;j++){
        arr[j]=arr[j+1];

    }
    arr[size-1]=first;
  }
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main(){
    int arr[]= {1, 2, 3, 4, 5};
    int d =2;
 RotateArray(arr,d);
 return 0;
}