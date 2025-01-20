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
        ll n;
        cin>>n;
        if(n%2==0){
            ll a=n/2;
            cout<<a<<" "<<a<<endl;
            continue;
        }
        ll div=1;
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                ll t=max(i, n/i);
                div=max(div, t);    
            }
        }
        cout<<div<<" "<<n-div<<endl;
    }
}