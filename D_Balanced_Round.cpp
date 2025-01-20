#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        ll k;
        cin>>n>>k;
        vll v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v);
        int ans=1;
        int ct=1;
        for(int i=0;i<n-1;i++){
           ll diff=v[i+1]-v[i];
           if(diff<=k) ct++;
           else{
                ans=max(ans, ct);
                ct=1;
           }
           if(i==n-2) ans=max(ans, ct);
        }
        cout<<n-ans<<endl;
    }
}