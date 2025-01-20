#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        unordered_map<ll, ll> mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp[0]<1){
            cout<<0<<endl;
            continue;
        }
        ll ans=n;
        for(ll i=0;i<n;i++){
            if(mp.count(i) and mp[i]>0){
                mp[i]--;
                continue;
            }
            else{
                ll r= i%x;
                if(mp[r]>0){
                    mp[r]--;
                }
                else{
                    ans=i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}