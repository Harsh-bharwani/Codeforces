#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {
    if (nums.size() < k) return 0; // Edge case: if the array size is smaller than k
    
    long long sum = 0;
    long long maxSum = 0;
    
    // Calculate the sum of the first subarray of size k
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    
    maxSum = sum;
    
    // Use sliding window to calculate the sums of remaining subarrays
    for (int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];
        maxSum = max(maxSum, sum);
    }
    
    return maxSum;
}

int main() {
    vector<int> v = {1, 5, 4, 2, 9, 9, 9};
    cout << maximumSubarraySum(v, 3) << endl;
    return 0;
}
