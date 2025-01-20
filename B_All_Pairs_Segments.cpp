#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, q;
        cin>>n>>q;
        vector<ll> pt(n+1);
        // vector<ll> seg(q);
        for(ll i=1;i<=n;i++){
            cin>>pt[i];
        }
        unordered_map<ll,ll> mp;
        for(ll i=1;i<n;i++){
            ll p=i*(n-i);
            mp[p]+=(pt[i+1]-pt[i]-1);
        }
        
        for(ll i=2;i<n;i++){
            ll p=i*(n-i)+i-1;
            mp[p]++;
        }
        mp[n-1]+=2;
        for(ll i=0;i<q;i++){
            ll k;
            cin>>k;
            if(mp.count(k)){
                cout<<mp[k]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;

    }
}