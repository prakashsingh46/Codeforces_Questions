#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;;
        vi v(n);
        fori(n) cin>>v[i];
        sort(v);
        vll pref(n,0);
        pref[0]=1ll*v[0];
        for(int i=1;i<n;i++) pref[i]=pref[i-1]+v[i];
        ll ans=0;
        for(int i=0;i<=k;i++){
            int l=i*2-1;
            int r=n-(k-i+1);
            if(l>0) ans=max(ans, pref[r]-pref[l]);
            else ans=max(ans, pref[r]);
        }
        cout<<ans<<endl;
    }
}