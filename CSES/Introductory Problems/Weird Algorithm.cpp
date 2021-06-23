// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long int ll;
typedef unsigned long long int ull;
const ll MAXN = 2e5+10;
const ll mod = 1000000007;
const ll N = 200005;
 
void solve(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n>1ll){
        if(n&1ll){
            n*=3ll;
            n+=1ll;
        }
        else{
            n/=2ll;
        }
        cout<<n<<" ";
    }
    cout<<"\n";
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