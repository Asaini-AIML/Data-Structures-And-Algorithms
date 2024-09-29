#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int functionName(int n,vector<int> &arr) {
        // Your code here
    int sum=((n+1)*n)/2;
int sum2=0;
for(int i=0;i<n-1;i++){
    sum2+=arr[i];
}
return abs(sum-sum2);
        
    }
};

int main() {
    Solution sol;
    vector<int> arr{ 1,2,3,5};
    cout << sol.functionName(5,arr) << endl;
    return 0;
}