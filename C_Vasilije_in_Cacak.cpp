#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n,k;
        ll x;
        cin>>n>>k>>x;
        ll l=1ll*k*1ll*(k+1)/2;
        ll r=(1ll*n*1ll*(n+1)/2)-(1ll*(n-k)*1ll*(n-k+1)/2);
        if(x>=l and x<=r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}