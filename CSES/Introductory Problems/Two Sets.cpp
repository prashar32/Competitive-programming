// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1092


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
	if(((n*(n+1))/2ll)&1ll){
		cout<<"NO\n";
		return;
	}
	else{
		cout<<"YES\n";
		ll su = (n*(n+1))/4ll, su1 = 0, su2 = 0;
		vector<ll> vec1, vec2;
		for(int i=n ; i>=1 ; i--){
			if((su1+i) <= su){
				vec1.push_back(i);
				su1+=i;
			}
			else{
				vec2.push_back(i);
				su2+=i;
			}
		}
		cout<<vec1.size()<<"\n";
		for(auto x : vec1){
			cout<<x<<" ";
		}
		cout<<"\n";
		cout<<vec2.size()<<"\n";
		for(auto x : vec2){
			cout<<x<<" ";
		}
		cout<<"\n";
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