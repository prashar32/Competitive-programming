// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0 ; i<n ; i++){
        cin>>vec[i];
    }
    long long int ans = 0;
    for(int i=1 ; i<n ; i++){
        ans += max(0, vec[i-1] - vec[i]);
        vec[i] = max(vec[i], vec[i-1]);
    }
    cout<<ans<<"\n";
    return 0;
}
