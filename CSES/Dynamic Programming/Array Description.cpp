// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1746

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
    int n, m;
    cin>>n>>m;
    vector<int>vec(n+1, 0);
    ll ans = 0;
    for(int i=1 ; i<=n ; i++)cin>>vec[i];
    int sum = accumulate(vec.begin(), vec.end(), 0);
    vector<vector<ll>>dp(n+1, vector<ll>(102, false));
    if(sum==0){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                dp[i][j] = 1;
            }
        }
    }
    else{
        vector<int>have;
        for(int i=1 ; i<=n ; i++){
            if(vec[i])have.push_back(i);
        }
        dp[have[0]][vec[have[0]]] = true;
        for(int i=have[0]-1 ; i>=1 ; i--){
            for(int j=1 ; j<=m ; j++){
                dp[i][j] = dp[i+1][j-1] | dp[i+1][j] | dp[i+1][j+1];
            }
        }
        dp[have.back()][vec[have.back()]] = true;
        for(int i=have.back()+1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                dp[i][j] = dp[i-1][j-1] | dp[i-1][j] | dp[i-1][j+1];
            }
        }
        for(int ind=0 ; ind<have.size() ; ind++)dp[have[ind]][vec[have[ind]]] = true;
        for(int ind=0 ; ind<have.size()-1 ; ind++){
            int curr = have[ind];
            int next = have[ind+1];
            for(int i=curr+1 ; i<next ; i++){
                for(int j=1 ; j<=m ; j++){
                    dp[i][j] = dp[i-1][j-1] | dp[i-1][j] | dp[i-1][j+1];
                }
            }
            for(int i=next-1 ; i>curr ; i--){
                for(int j=1 ; j<=m ; j++){
                    dp[i][j] = dp[i][j] & (dp[i+1][j-1] | dp[i+1][j] | dp[i+1][j+1]);
                }
            }
        }
    }
    for(int i=2 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            dp[i][j] = dp[i][j]*(dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]);
            dp[i][j] %= mod;
        }
    }
    for(int j=1 ; j<=m ; j++)ans+=dp[n][j];
    cout<<ans%mod<<"\n";
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

