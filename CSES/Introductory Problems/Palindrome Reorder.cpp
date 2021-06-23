// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1755

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
	vector<int> vec(26, 0);
	string forw = "", back = "", mid = "";
	for(char ch='A' ; ch<='Z' ; ch++){
		int cnt = count(str.begin(), str.end(), ch);
		if(cnt&1){
			mid+=ch;
			if(mid.size()>1){
				cout<<"NO SOLUTION\n";
				return;
			}
			forw+=string(cnt/2, ch);
			back+=string(cnt/2, ch);
		}
		else{
			forw+=string(cnt/2, ch);
			back+=string(cnt/2, ch);
		}
	}	
	reverse(back.begin(), back.end());
	string ans = forw+mid+back;
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