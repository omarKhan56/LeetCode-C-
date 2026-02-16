#include<bits/stdc++.h>
using namespace std;
//Range Sum Query in 1D Array using Prefix Sum

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1]+arr[i];
        
    }
    int rangeSum;
    int left = 1;
    int right = 3;
    if(left == 0){
        rangeSum = prefixSum[right];
    
    }
    else{
        rangeSum = prefixSum[right]-prefixSum[left-1];
    
    
    }
    cout<<rangeSum<<endl;
    return 0;

}