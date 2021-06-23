// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1635

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
    vector<ll>dp(x+1, 0);
    dp[0] = 1;
    for(int i=1 ; i<=x ; i++){
        for(int j=0 ; j<n ; j++){
            if(i-coins[j] >= 0){
                dp[i] += dp[max(i-coins[j], 0)];
            }
        }
        dp[i] %= mod;
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

