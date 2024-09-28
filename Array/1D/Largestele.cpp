#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int largest(vector<int> &arr) {
        
        int maxx=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxx=max(maxx,arr[i]);
        }
        return maxx;
    }
    int main() {
        vector<int>arr{1,9,8,4,5,3,7};
        cout<<largest(arr);
        
        return 0;
    }
};