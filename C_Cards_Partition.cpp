#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll mx=*max_element(arr.begin() , arr.end());
        ll sum=0;
        ll rem=0;
        ll size=0;
        for(ll it: arr){
            sum+=it;
            if(it!=0) size++;
        }
        mx=max(mx, size);
        for(ll it:arr){
            rem+=mx-it;
        }
        sum+=min(k, rem);
        ll ct=sum/mx;
        cout<<ct<<endl;
    }
}