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
        ll n;
        cin>>n;
        ll sq=1ll*sqrt(n);
        int ans=1;
        int ct=1;
        if(n%2!=0){
            cout<<1<<endl;
            continue;
        }
        for(ll i=1;i<=10000;i++){
            if(n%i==0 and n%(i+1)==0) ct++;
            else{
                ans=max(ans, ct);
                ct=1;
            }
        }
        cout<<ans<<endl;
    }
}