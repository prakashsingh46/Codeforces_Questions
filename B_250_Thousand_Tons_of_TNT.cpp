#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        unordered_set<int> st;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        ll ans=LLONG_MIN;
        for(auto it : st){
            ll mx=LLONG_MIN;
            ll mn=LLONG_MAX;
            ll a=0;
            for(int i=1;i<=n;i++){
                a+=arr[i];
                if(i%it==0){
                    mx=max(mx, a);
                    mn=min(mn, a);
                    a=0;
                }
            }
            ans=max(ans , mx-mn);
        }
        cout<<ans<<endl;

    }
}