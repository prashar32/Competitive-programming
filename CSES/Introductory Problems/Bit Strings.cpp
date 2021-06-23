// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long int ll;
typedef unsigned long long int ull;
const ll MAXN = 2e5+10;
const ll mod = 1000000007;
const ll N = 200005;
 
ll fast_pow(ll a, ll p) {
    ll res = 1;
    while(p){
        if(p%2 == 0) {
            a = (a*a)%mod;
            p/=2;
        } 
        else{
            res = (res*a)%mod;
            p--;
        }
    }
    return (res+mod)%mod;
}
 
void solve(){
	ll n;
	cin>>n;
	cout<<fast_pow(2ll, n)<<"\n";
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