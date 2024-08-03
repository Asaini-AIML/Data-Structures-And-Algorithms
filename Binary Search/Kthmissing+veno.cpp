#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Bs( vector<int>&arr,int k1){
      int l=0;
      int h=arr.size()-1;
      while(l<=h){
        int mid=(l+h)/2;
        int missing=arr[mid]-(mid+1);
        if(missing <k1){
            l=mid+1;
        }
        else {
            h=mid-1;
        }

      }
      return h+1+k1;

}
int main()
{
    vector<int>arr{2,3,4,7,11};
    int k=4;
    int k1=4;
    //Brute force
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=k)k++;
        else break;
    }
    cout<<"Brute"<<k<<endl;
    //TC-O(n)
    //--------------//
    //-----OPTIMAL----///
    int result=Bs(arr,k1);
    cout<<"Bs"<<result;
    //tc-O(logn)//

 return 0;
}