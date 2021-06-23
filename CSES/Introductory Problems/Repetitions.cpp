// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1069

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
	string str;
	cin>>str;
	int n = str.size();
	int ans = 0;
	int cnt = 1;
	for(int i=1 ; i<n ; i++){
		if(str[i]==str[i-1])cnt+=1;
		else{
			ans = max(ans, cnt);
			cnt = 1;
		}
	}
	ans = max(ans, cnt);
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