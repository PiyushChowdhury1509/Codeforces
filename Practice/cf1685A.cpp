#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool solve(int n,vector<long long>&nums){
    if(n%2!=0) return false;
    sort(nums.begin(),nums.end());
    int j=n/2;
    if(nums[j]==nums[j-1]) return false;
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        bool ans=solve(n,nums);
        if(!ans) cout<<"NO"<<endl;
        else{
            int j=n/2;
            int i=0;
            vector<long long>ans(n); 
            int idx=0;
            while(j<n){
                if(idx<n && i<n/2) ans[idx++]=nums[i++];
                if(idx<n && j<n) ans[idx++]=nums[j++];
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}