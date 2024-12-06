#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int target){
for(int i=0;i<size;i++){
    if(arr[i]==target){
        return i;
    }
}
return -1;
}
int main(){
    int arr[]={34,23,45,6};
    int size=4;
    int target=34;
    cout<<"the element "<<target<<" found on index " << LinearSearch(arr,size,target)<<endl;
    return 0;
}