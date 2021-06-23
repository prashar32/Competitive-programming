// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1094

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
	int n;
	cin>>n;
	ll ans = 0;
	std::vector<ll> vec(n);
	cin>>vec[0];
	for(int i=1 ; i<n ; i++){
		cin>>vec[i];
		if(vec[i]<vec[i-1]){
			ans+=(vec[i-1]-vec[i]);
			vec[i] = vec[i-1];
		}
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