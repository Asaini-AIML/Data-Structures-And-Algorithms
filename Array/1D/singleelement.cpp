#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int functionName(vector<int> &arr) {
        // Your code here
         // code
        int xxor=0;
        for(int i=0;i<arr.size();i++){
            xxor=xxor^arr[i];
        }
        return xxor;
        
        
    }
};

int main() {
    Solution sol;
    vector<int> arr{1, 1, 2, 5, 5};
    cout << sol.functionName(arr) << endl;
    return 0;
}