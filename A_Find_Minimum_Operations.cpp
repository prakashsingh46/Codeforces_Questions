#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll highestPower(ll k, ll n){
    ll ans=1;
    while(ans*k<=n){
        ans*=k;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
            continue;
        }
        ll ct=0;
        while(n>0){
            ct+=n%k;
            n=n/k;
        }
        cout<<ct<<endl;
    }
}