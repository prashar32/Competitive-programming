// Author      :- Adarsh Prashar
// Codeforces  :- prashar32
// Codechef    :- prashar32
// LeetCode    :- prashar32
// CSES        :- prashar32

// Problem Link 
// https://cses.fi/problemset/task/1634

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long int ll;
typedef unsigned long long int ull;
const ll MAXN = 2e5+5;
const ll mod = 1000000007;
const ll N = 200005;

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int>coins(n);
    for(int i=0 ; i<n ; i++){
        cin>>coins[i];
    }
    vector<int>dp(x+1, 1e6+5);
    dp[0] = 0;
    for(int i=1 ; i<=x ; i++){
        for(int j=0 ; j<n ; j++){
            if(i-coins[j]>=0 && dp[i-coins[j]] != 1e6+5){
                dp[i] = min(dp[i], 1 + dp[i-coins[j]]);
            }
        }
    }
    cout<<dp[x]<<"\n";
    return;
}
 
int main() 
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);                      
    cout.tie(NULL);                

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    
return 0;
}

