#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int  functionName(vector<int> &arr,int K) {
        // Your code here
        int N=arr.size();
        for(int i=0;i<N;i++){
            if(arr[i]==K) return 1;
           
        }
        return -1;
        
    }
};

int main() {
    Solution sol;
    vector<int> arr{1,2,3,4,6};
   cout<<sol.functionName(arr,5);
    return 0;
}