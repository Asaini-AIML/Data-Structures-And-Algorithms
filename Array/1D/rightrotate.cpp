#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> functionName(vector<int> &arr, int k) {
        // Handle edge case where arr is empty or k is 0
        int n = arr.size();
        if (n == 0 || k == 0) return arr;

        k = k % n; // Handle cases where k >= n
        vector<int> hp(k);
        
        // Store the last k elements in hp
        for (int i = 0; i < k; i++) {
            hp[i] = arr[n - k + i];
        }

        // Shift the first n-k elements to the left
        for (int i = n - 1; i >= k; i--) {
            arr[i] = arr[i - k];
        }

        // Copy the last k elements from hp to the end of arr
        for (int i = 0; i < k; i++) {
            arr[i] = hp[i];
        }
        
        return arr;
    }
};

int main() {
    Solution sol;
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    vector<int> r;
    r = sol.functionName(arr, k);
    for (auto it : r) {
        cout << it << " ";
    }
    return 0;
}
