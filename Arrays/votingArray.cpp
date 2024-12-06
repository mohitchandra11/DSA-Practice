#include<bits/stdc++.h>
using namespace std;
int size;
 vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int size=arr.size();
        vector <int> arr1;
        for(int i=0;i<size;i++){
            for(int j=1;j<size;j++){
                for(int k=2;k<size;j++){
                    if(arr[i]==arr[j] && arr[j]==arr[k]){
                        arr1.push_back(arr[i]);
                    }
                }
            }
        }
        return arr1;
    }

    int main(){
        vector<int> arr={2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};

        for(int i=0;i<size;i++)
        {
            cout<<findMajority(arr);
        }
    }