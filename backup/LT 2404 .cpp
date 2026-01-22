#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int mostFrequentEven(vector<int>& nums){
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 0){
                mp[nums[i]]++;
            }
        }
        int MaxFreq = 0;
        int Ele = -1;
        for(auto it : mp){
            if(it.second>MaxFreq || it.second == MaxFreq && it.first < Ele){
                it.second = MaxFreq;
                Ele = it.first;
            
            }

        }
        return Ele;
    }

};
int main(){
    Solution sol;
    vector<int> nums = {0,1,2,2,4,4,1};
    int ans = sol.mostFrequentEven(nums);
    cout<<ans<<endl;
    return 0;
}