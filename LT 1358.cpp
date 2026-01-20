#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int numberOfSubstrings(string s){
        int n = s.size();
        int left = 0;
        unordered_map<char,int> mp;
        int count = 0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            while(mp.size()==3){
                mp[s[left]]--;
                if(mp[s[left]] == 0){
                    mp.erase(s[left]);
                }
                left++;
            
            }
            count += left;

        }
        return count;
    }
};
int main(){
    Solution sol;
    string s = "abcabc";
    int ans = sol.numberOfSubstrings(s);
    cout<<ans<<endl;
    return 0;
}