#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string LongestCommonPrefix(vector<string>& strs){
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string strs1 = strs[0];
        string strs2 = strs[n-1];
        string ans = "";
        for(int i=0;i<strs.size();i++){
            if(strs1[i] == strs2[i]){
                ans+=strs1[i];
            }
            else{
                break;
            }
        }
        return ans;
            
    }
};
int main(){
    Solution sol;
    vector<string> strs = {"flower","flow","flight"};
    string res = sol.LongestCommonPrefix(strs);
    cout<<res<<endl;
    return 0;
}

    



