// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1637

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
    int ans = 0;
    while(n>0){
        int tn = n;
        int mx = 0;
        while(tn>0){
            mx = max(mx, tn%10);
            tn/=10;
        }
        n -= mx;
        ans += 1;
    }
    cout<<ans<<"\n";
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

