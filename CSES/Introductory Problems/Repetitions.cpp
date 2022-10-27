// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.size();
    int cnt = 1;
    int ans = 0;
    for(int i=1 ; i<n ; i++){
        if(str[i] != str[i-1]){
            ans = max(ans, cnt);
            cnt = 1;
        }
        else
            cnt += 1;
    }
    ans = max(ans, cnt);
    cout<<ans<<"\n";
    return 0;
}
