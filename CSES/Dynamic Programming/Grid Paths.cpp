// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1638

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
    vector<string>grid(n);
    for(int i=0 ; i<n ; i++)cin>>grid[i];
    vector<vector<ll>>dp(n, vector<ll>(n, 0));
    if(grid[0][0] == '*'){
        cout<<0<<"\n";
        return;
    }
    dp[0][0] = 1;
    for(int j=1 ; j<n ; j++){
        if(grid[0][j] != '*')dp[0][j] = 1;
        else break;
    }
    for(int i=1 ; i<n ; i++){
        if(grid[i][0] != '*')dp[i][0] = 1;
        else break;
    }
    for(int i=1 ; i<n ; i++){
        for(int j=1 ; j<n ; j++){
            if(grid[i][j] != '*')dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
        }
    }
    cout<<dp[n-1][n-1]<<"\n";
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

