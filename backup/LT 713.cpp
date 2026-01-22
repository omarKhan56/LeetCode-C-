#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k){
        if(k<=1) return 0;
        int n = nums.size();
        int count = 0;
        int product = 1;
        int left = 0;
        for(int right = 0;right<n;right++){
            product *= nums[right];
            if(product>=k){
                product /= nums[left];
                left++;
            }
            count+= right - left + 1;
        }
        return count;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {10,5,2,6};
    int k = 100;
    int ans = sol.numSubarrayProductLessThanK(nums,k);
    cout<<ans<<endl;
    return 0;
} 