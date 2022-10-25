// Author      :- Adarsh Prashar

// Problem Link 
// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    while(n != 1){
        cout<<n<<" ";
        if(n&1)
            n = 3ll*n + 1;
        else
            n /= 2ll;
    }
    cout<<n<<"\n";
    return 0;
}
