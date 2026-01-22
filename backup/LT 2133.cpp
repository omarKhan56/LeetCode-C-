#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool checkValid(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=0;j<n;j++){
                if(st.find(matrix[i][j]) != st.end()){
                    return false;
                }
                st.insert(matrix[i][j]);
            }
        }
        for(int j = 0;j<n;j++){
            unordered_set<int> st;
            for(int i=0;i<n;i++){
                if(st.find(matrix[i][j]) != st.end()){
                    return false;
                }
                st.insert(matrix[i][j]);
            
            }
        }
        return true;
    
    }

};
int main(){
    Solution sol;
    vector<vector<int>> matrix = {{1,2,3},{3,1,2},{2,3,1}};
    bool ans = sol.checkValid(matrix);
    cout<<ans<<endl;
    return 0;
}