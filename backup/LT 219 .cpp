#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        int n = nums.size();
        unordered_set<int> st;
        int i = 0;
        int j = 0;
        while(j<n){
            if(abs(i-j)>k){
                st.erase(nums[i]);
                i++;
            }
            if(st.find(nums[i]) != st.end()){
                return true;
                
            }
            st.insert(nums[j]);
            j++;
        
        }
        return false;
    
    }

};
int main(){
    Solution sol;
    vector<int> nums = {1,2,3,1};
    int k = 3;
    bool result = sol.containsNearbyDuplicate(nums,k);
    cout<<result<<endl;
    return 0;

}