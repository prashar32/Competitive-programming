// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1158

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
    vector<int>price(n+1), pages(n+1);
    for(int i=1 ; i<=n ; i++)cin>>price[i];
    for(int i=1 ; i<=n ; i++)cin>>pages[i];
    vector<vector<int>>dp(n+1, vector<int>(x+1, 0));
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=x ; j++){
            if(price[i]<=j){
                dp[i][j] = max(pages[i] + dp[i-1][j-price[i]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][x]<<"\n";
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

