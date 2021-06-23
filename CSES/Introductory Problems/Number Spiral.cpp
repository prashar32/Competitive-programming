// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1071

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
	ll row, col;
	cin>>row>>col;
	if(row<=col){
		if(col&1ll){
			ll ans = col*col-row+1ll;
			cout<<ans<<"\n";
			return;
		}
		else{
			ll ans = (col-1)*(col-1) + row;
			cout<<ans<<"\n";
			return;
		}
	}
	else{
		if(row&1ll){
			ll ans = (row-1)*(row-1) + col;
			cout<<ans<<"\n";
		}
		else{
			ll ans = row*row - col + 1ll;
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
	cin>>t;
	while(t--){
		solve();
	}
    
return 0;
}