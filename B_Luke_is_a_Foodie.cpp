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
        ll x;
        cin>>n>>x;
        vll v(n);
        fori(n) cin>>v[i];

        ll l=v[0]-x, r=v[0]+x;
        int ans=0;
        for(int i=1;i<n;i++){
            ll cl = v[i]-x, cr=v[i]+x;

            if((cl>r && cr>r) || (cl<l && cr<l)){
                ans++;
                l=cl;
                r=cr;
            }
            else{
                if(cl>l && cr<r){
                    l=cl;
                    r=cr;
                }
                else if(cr<r) r=cr;
                else if(cl>l){
                    l=cl;
                }
            }
        }
        cout<<ans<<endl;
    }
}