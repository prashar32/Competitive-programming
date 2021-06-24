// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/2413

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long int ll;
typedef unsigned long long int ull;
const ll MAXN = 2e5+5;
const ll mod = 1000000007;
const ll N = 200005;

vector<vector<ll>>vertical(1e6+1, vector<ll>(2, 0));
vector<vector<ll>>horizontal(1e6+1, vector<ll>(3, 0));

void solve(){
    int n;
    cin>>n;
    ll ans = (vertical[n][0] + vertical[n][1])%mod;
    cout<<ans<<"\n";
    return;
}
 
int main() 
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);                      
    cout.tie(NULL);    


    vertical[1][0] = 1;
    vertical[1][1] = 1;
    for(int i=2 ; i<=1e6 ; i++){
        horizontal[i][0] = (vertical[i-1][0] + vertical[i-1][1])%mod;
        horizontal[i][1] = (2*vertical[i-1][1])%mod;
        horizontal[i][2] = (vertical[i-1][0] + vertical[i-1][1])%mod;
        vertical[i][1] = (vertical[i-1][1] + horizontal[i][1] + horizontal[i][2])%mod;
        vertical[i][0] = (vertical[i-1][0] + horizontal[i][2])%mod;
    }

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
return 0;
}

