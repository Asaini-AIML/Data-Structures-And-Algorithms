#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
         int largestSecond(vector<int> &arr) {
            int largest=arr[0];
            int secondlargest=-1;
         for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                secondlargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondlargest){
                secondlargest=arr[i];
            }
   
         }
         return secondlargest;
         }
         
//------->TC-O(2n) SC-O(1)
    //  int secondLargest(vector<int> &arr) {
        
    //     int maxx=INT_MIN;
    //     int secondmax=INT_MIN;
    //     for(int i=0;i<arr.size();i++){
    //         maxx=max(maxx,arr[i]);
    //     }
    //      for(int i=0;i<arr.size();i++){
    //         if(arr[i]!=maxx)
    //         secondmax=max(secondmax,arr[i]);
    //     }
    //     return secondmax;
    // }
    
};
int main() {
    Solution sol;
        vector<int>arr{1,9,8,4,5,3,7};
        // cout<<sol.secondLargest(arr);
        cout<<sol.largestSecond(arr);
        
        return 0;
    }