#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<vector<ll>> v(n+1, vector<ll>(2));
        for(int i=1;i<=n;i++){
            cin>>v[i][0]>>v[i][1];
        }
        
        ll d1=LLONG_MAX;
        ll d2=LLONG_MAX;
        for(int i=1;i<=k;i++){
            ll t1=abs(v[i][0]-v[a][0])+abs(v[i][1]-v[a][1]);
            d1=min(d1, t1);
            ll t2=abs(v[i][0]-v[b][0])+abs(v[i][1]-v[b][1]);
            d2=min(d2, t2);
        }
      
        if(a<=k && b<=k){
            cout<<0<<endl;
        }
        else if(a<=k && b>k){
            cout<<d2<<endl;

        }
        else if(a>k && b<=k){
            cout<<d1<<endl;
        }
        else{
            ll t3=abs(v[a][0]-v[b][0])+abs(v[a][1]-v[b][1]);
            ll d3=d1+d2;
            ll ans;
            if(d1==LLONG_MAX || d2==LLONG_MAX) ans=t3;
            else ans=min(t3, d3);
            cout<<ans<<endl;
        }
    }
}