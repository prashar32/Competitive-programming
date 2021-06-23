// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1083

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
	std::vector<int> vec(n-1);
	for(int i=0 ; i<n-1 ; i++){
		cin>>vec[i];
	}	
	sort(vec.begin(), vec.end());
	for(int i=0 ; i<n-1 ; i++){
		if(vec[i]!=(i+1)){
			cout<<i+1<<"\n";
			return;
		}
	}
	cout<<n<<"\n";
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