// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1618

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
	ll ans = 0;
	for(ll i=5ll ; i<=1e9+5 ; i*=5ll){
		ans+=(n/i);
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