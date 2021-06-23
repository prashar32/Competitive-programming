// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1633


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
    int n;
    cin>>n;
    vector<ll>dp(n+1, 0);
    dp[0] = 1;
    for(int i=1 ; i<=n ; i++){
        for(int j=i-1 ; j>=max((i-6), 0) ; j--){
            dp[i] += dp[j];
        }
        dp[i] %= mod;
    }
    cout<<dp[n]<<"\n";
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

