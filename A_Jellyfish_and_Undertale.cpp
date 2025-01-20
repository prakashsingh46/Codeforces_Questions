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
        ll a,b;
        int n;
        cin>>a>>b>>n;
        ll ans=0;
        for(int i=0;i<n;i++){
            ll inp;
            cin>>inp;
            ans+=b-1;
            b=1ll*min(a, 1+inp);
        }
        ans+=b;
        cout<<ans<<endl;

    }
}