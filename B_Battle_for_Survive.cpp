#include<bits/stdc++.h>
#define ll long long
#define pp pair<ll, ll>
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
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll a=v[n-2];
        priority_queue<pp> pq;
        for(ll i=0;i<n-2;i++){
            pq.push({v[i],i});
        }
        unordered_set<ll> eliminated;
        while(pq.size()>0){
            ll idx=pq.top().second;
            ll hl=pq.top().first;
            pq.pop();
            if(!eliminated.count(idx)){
                a-=hl;
                eliminated.insert(idx);
            }
        }
        cout<<(ll)(v[n-1]-a)<<endl;
    }
}