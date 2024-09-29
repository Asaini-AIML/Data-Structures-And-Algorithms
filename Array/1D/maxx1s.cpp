#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int functionName(vector<int> &arr) {
        // Your code here
        int i=0;
        int cnt=0;
        int count=0;
        while(i<arr.size()){
            
        if(arr[i]==1){
            count++;
            i++;
        }
        else{
             cnt=max(cnt,count);
            i++;
            count=0;
        }
          
           
        }
        cnt=max(cnt,count);
        return cnt;
        
    }
};

int main() {
    Solution sol;
    vector<int> arr{1,1,0,1,1,1,1,0};
    cout << sol.functionName(arr) << endl;
    return 0;
}