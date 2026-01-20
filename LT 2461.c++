#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    long long maximumSubarraySum(vector<int>& nums, int k){
        int n = nums.size();
        int sum = 0;
        int left = 0;
        int right = 0;
        int result = 0;
        unordered_set<int> st;
        while(right<n){
            if(st.count(nums[right])){
                sum-=nums[left];
                st.erase(nums[left]);
                left++;
            }
            sum+=nums[right];
            st.insert(nums[right]);

            if(right-left+1 == k){
                result = max(result,sum);
                sum-=nums[left];
                st.erase(nums[left]);
                left++;
            
            }
            right++;
        }
        return result;

    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,5,4,2,9,9,9};
    int k = 3;
    int ans = sol.maximumSubarraySum(nums,k);
    cout<<ans<<endl;
    return 0;
}