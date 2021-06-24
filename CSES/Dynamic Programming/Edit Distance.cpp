// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1744

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
    int a, b;
    cin>>a>>b;
    vector<vector<int>>moves(a+1, vector<int>(b+1, 0));
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=b ; j++){
            if(i != j){
                moves[i][j] = 1e5;
                for(int k=1 ; k<i ; k++){
                    moves[i][j] = min(moves[i][j], 1 + moves[k][j] + moves[i-k][j]);
                }
                for(int k=1 ; k<j ; k++){
                    moves[i][j] = min(moves[i][j], 1 + moves[i][k] + moves[i][j-k]);
                }
            }
        }
    }
    cout<<moves[a][b]<<"\n";
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

