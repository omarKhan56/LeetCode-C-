#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive, negative;

        for (int x : nums) {
            if (x > 0)
                positive.push_back(x);
            else
                negative.push_back(x);
        }

        vector<int> ans(nums.size());
        int posIdx = 0;
        int negIdx = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                ans[i] = positive[posIdx++];
            } else {
                ans[i] = negative[negIdx++];
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = sol.rearrangeArray(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
