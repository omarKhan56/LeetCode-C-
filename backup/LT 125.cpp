#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPalindrome(string s){
        int n = s.size();
        string result = "";
        for(char c : s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        int i = 0;
        int j = result.size()-1;
        while(i<j){
            if(result[i] != result[j]){
                return false;
            }
            i++;
            j--;

        }
        return true;
     }
};
int main(){
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    bool result = sol.isPalindrome(s);
    cout<<result<<endl;
    return 0;

}