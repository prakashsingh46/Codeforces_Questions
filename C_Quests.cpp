#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll ans=0;
        vector<ll> premax(n);
        ll mx=0;
        for(ll i=0;i<n;i++){
            
            mx=max(mx, b[i]);
            premax[i]=mx;
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(i>=k) break;
            sum+=a[i];
            ans=max(ans, (sum+(k-i-1)*premax[i]));
        }
        cout<<ans<<endl;

    }
}