#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,9,8,4,5,3,7};
     int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int j =i;
       while(j>0&&arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
       }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}