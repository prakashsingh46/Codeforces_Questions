#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;
int maxPowerTwo(ll n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);

    n=(n+1)>>1;
    return __builtin_ctz(n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        int p=maxPowerTwo(k+1);
        cout<<k+p<<endl;
    }
}