#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;;
        cin>>n>>x;
        ll mx=0;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mx=max(mx, arr[i]);
        }
        ll r=mx+x+1;
        ll l=0;
        ll res=0;
        while(l<r){

            ll mid =l+(ll)(r-l)/2;
            ll ans=0;
            for(ll it : arr){
                if(mid>it) ans+=(mid-it);
            }
            
            if(ans<=x){
                res=mid;
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        
        cout<<res<<endl;
    }
}