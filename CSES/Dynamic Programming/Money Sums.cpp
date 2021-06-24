// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1745

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long int ll;
typedef unsigned long long int ull;
const ll MAXN = 2e5+5;
const ll mod = 1000000007;
const ll N = 200005;

void solve(){
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0 ; i<n ; i++)cin>>coins[i];
    int sum = accumulate(coins.begin(), coins.end(), 0);
    vector<bool>values(sum+1, false);
    values[sum] = true;
    for(int i=0 ; i<n ; i++){
        for(int j=1 ; j<=sum ; j++){
            if(values[j])values[j-coins[i]] = true;
        }
    }
    vector<int>ans;
    for(int i=1 ; i<=sum ; i++){
        if(values[i])ans.push_back(i);
    }
    cout<<ans.size()<<"\n";
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<"\n";
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

