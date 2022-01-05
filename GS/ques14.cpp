#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int ans = INT_MAX;
    int left=0, sum=0, n=nums.size();
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>=target){
            ans = min(ans, i-left+1);
        }
        while(left<=i&& sum>=target){
            ans = min(ans, i-left+1);
            sum-=nums[left];
            left++;
        }
        
    }
    if(ans==INT_MAX) return 0;
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    cout<<minSubArrayLen(k, v)<<endl;
    return 0;
}
