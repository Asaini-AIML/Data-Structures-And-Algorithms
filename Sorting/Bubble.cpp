#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,9,8,4,5,3,7};
     int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=n-1; i>=1; i--){
        
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
            }
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}