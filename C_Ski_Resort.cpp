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
        ll q;
        cin>>n>>k>>q;
        vll v(n);
        fori(n) cin>>v[i];

        ll ct=0;
        ll ans=0;
        fori(n){
            if(v[i]<=q) ct++;
            else{
                if(ct>=k){
                    ans+=(ct+1-k)*(ct+1-k+1)/2;
                }
                ct=0;
            }
            if(i==n-1){
                if(ct>=k){
                    ans+=(ct+1-k)*(ct+1-k+1)/2;
                }
                ct=0;
            }
        }
        cout<<ans<<endl;
    }
}