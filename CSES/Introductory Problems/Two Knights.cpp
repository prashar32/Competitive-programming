// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1072

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
	for(ll i=1 ; i<=n ; i++){
		if(i==1){
			cout<<0<<"\n";
		}
		else if(i==2){
			cout<<6<<"\n";
		}
		else if(i==3){
			cout<<28<<"\n";
		}
		else if(i==4){
			cout<<96<<"\n";
		}
		else{
			ll total = i*i;
			ll ans = (i-4ll)*(i-4ll)*(total-9ll) + 4ll*(total-5ll) + 4*(i-4ll)*(total-7ll) + 4ll*(total-3ll) + 8ll*(total-4ll) + 4ll*(i-4)*(total-5ll);
			ans/=2;
			cout<<ans<<"\n";
		}
	}
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