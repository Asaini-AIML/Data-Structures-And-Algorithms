#include<bits/stdc++.h>
using namespace std;
void Bubble(int arr[],int n){
    if(n==0)return;
    for(int j=1;j<n;j++){
        if(arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);           // Recursive call for remaining elements.
        }
    }
    Bubble(arr,n-1);
}
int main()
{
    int arr[]={1,9,8,4,5,3,7};
     int n = sizeof(arr) / sizeof(arr[0]);
   Bubble(arr,n);
        
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}