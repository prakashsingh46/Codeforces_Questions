#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v);
        double avg=sum/n;
        ll h=n/2;
        if(n<=2){
            cout<<-1<<endl;
            continue;
        }
        if(avg/2>v[h]){
            cout<<0<<endl;
            continue;
        }
        ll x=n*2*v[h]-sum;
        x++;
        cout<<x<<endl;

    }
}