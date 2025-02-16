#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <iomanip>
#include <numeric>
#include <cassert>
#include <cstring>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define F first
#define S second
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll mod_add(ll a, ll b, ll m = MOD) { return (a % m + b % m) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return ((a % m - b % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
ll mod_exp(ll a, ll b, ll m = MOD) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    fast_io;

    int t;  
    cin>>t;
    while (t--) {
        vector<int>nums(4);
        for(int i=0;i<4;i++) cin>>nums[i];
        unordered_map<int,int>mp;
        int a=nums[0]+nums[1];
        int b=nums[2]-nums[1];
        int c=nums[3]-nums[2];
        mp[c]++;
        mp[b]++;
        mp[a]++;
        int maxm=INT_MIN;
        int ele;
        for(auto i:mp){
            if(maxm<i.second){
                maxm=i.second;
                ele=i.first;
            }
        }
        int ans=0;
        if(ele==(nums[1]+nums[0])) ans++;
        if(nums[2]==(ele+nums[1])) ans++;
        if(nums[3]==(ele+nums[2])) ans++;
        cout<<ans<<endl;
    }

    return 0;
}