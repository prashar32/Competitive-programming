// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/2205

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
	int sz = pow(2, n);
	vector<string> vec;
	for(int i=0 ; i<n ; i++){
		string str = string(pow(2, i), '0');
		str+=string(pow(2, i), '1');
		while(str.size()<sz){
			string temp = str;
			reverse(temp.begin(), temp.end());
			str+=temp;
		}
		vec.push_back(str);
	}
	reverse(vec.begin(), vec.end());
	for(int i=0 ; i<sz ; i++){
		for(int j=0 ; j<n ; j++){
			cout<<vec[j][i];
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