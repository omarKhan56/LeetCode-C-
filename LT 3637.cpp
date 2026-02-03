#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isTrionic(vector<int>& nums){
        int n = nums.size();
        int i=0;
        while(i<n-1 && nums[i] < nums[i+1]) i++;
        if(i==0) return false;
        int j = i;
        while(j<n-1 && nums[j] > nums[j+1]) j++;
        if(j == i) return false;
        int k = j;
        while(k<n-1 && nums[k] == nums[k+1]) k++;
        if(k!=n-1) return false;
        if(k == j) return false;
    }
        

};
int main(){
    Solution sol;
    vector<int> nums =  {1,3,5,4,2,6};
    bool ans = sol.isTrionic(nums);
    cout<<ans<<endl;
}