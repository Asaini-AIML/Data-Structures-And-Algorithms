#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,9,8,4,5,3,7};
     int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int min =i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}