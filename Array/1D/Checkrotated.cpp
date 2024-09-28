#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool functionName(vector<int> &arr) {
        // Your code here
        if(arr.size()<=0)return false;
        int n=arr.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i])cnt++;
        }
        if(arr[n-1]>arr[0]){
            cnt++;
        }
        return cnt<=1;

        
    }
};

int main() {
    Solution sol;
    vector<int> arr{1,2,3,4,5};
    bool c=sol.functionName(arr);
    cout << c << endl;
    return 0;
}