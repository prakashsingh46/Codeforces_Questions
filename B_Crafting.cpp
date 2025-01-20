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
        int n;
        cin>>n;
        vll a(n);
        fori(n) cin>>a[i];
        vll b(n);
        fori(n) cin>>b[i];

        map<int, ll> mp;
        fori(n){
            if(a[i]-b[i]<0) mp[i]=b[i]-a[i];
        }
        if(mp.size()>=2){
            cout<<"NO"<<endl;
            continue;
        }
        else if(mp.size()==0){
            cout<<"YES"<<endl;
            continue;
        }
        else if(mp.size()==1 and n==1){
            cout<<"NO"<<endl;
            continue;
        }
        int pos=(*mp.begin()).first;
        ll need=(*mp.begin()).second;

        ll mn=LLONG_MAX;
        fori(n){
            if(i!=pos and a[i]-b[i]>=0) mn=min(mn, a[i]-b[i]);
        }
        if(mn>=need) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}