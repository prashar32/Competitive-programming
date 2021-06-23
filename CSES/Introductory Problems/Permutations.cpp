// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1070

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
	if(n==1){
		cout<<1<<"\n";
		return;
	}
	if(n<=3){
		cout<<"NO SOLUTION\n";
		return;
	}
	else{
		for(int i=2 ; i<=n ; i+=2){
			cout<<i<<" ";
		}
		for(int i=1 ; i<=n ; i+=2){
			cout<<i<<" ";
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
