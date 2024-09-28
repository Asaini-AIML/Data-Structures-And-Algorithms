#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> functionName(vector<int> &arr) {
        int n = arr.size();
       int j=0;
      for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
      }
       return arr;
       
        
     
    }
};

int main() {
    Solution sol;
    vector<int> arr{0,1,0,3,12};
    vector<int> r;
    r = sol.functionName(arr);
    for (auto it : r) {
        cout << it << " ";
    }
    return 0;
}
