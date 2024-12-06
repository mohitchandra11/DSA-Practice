#include<iostream>
#include<climits>
using namespace std;


int main(){
    int index;//to printing index.
    int n;
    int smallest= INT_MAX;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for( int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    /*cout<<"array elements are"<<endl;
    for(int i=0;i<=n-1;i++){
cout<<arr[i]<<endl;}*/
    for(int j=0;j<=n-1;j++){
       if(arr[j]<smallest){
        smallest=arr[j];
       }
       if(smallest==arr[j]){
        index=j;
       }
      
    }
    cout<<"smallest element is : "<< smallest <<endl;
    cout<<"mininum index is present on index "<<index<<endl;
return 0;
}