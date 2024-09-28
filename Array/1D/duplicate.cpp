#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int functionName(vector<int> &arr) {
        // Your code here
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        return mp.size();
        
    }
};

int main() {
    Solution sol;
    vector<int> arr{ 0,0,1,1,1,2,2,3,3,4};
    cout << sol.functionName(arr) << endl;
    return 0;
}