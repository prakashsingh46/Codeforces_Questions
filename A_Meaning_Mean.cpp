#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i=0;i<n;i++){
            ll it;
            cin>>it;
            pq.push(it);
        }
        while(pq.size()>1){
            ll a=pq.top();
            pq.pop();
            ll b=pq.top();
            pq.pop();
            double c=((double)(a+b))/2;
            ll d=(a+b)/2;
            if(c-d>0.5) d++;
            pq.push(d);
        }
        cout<<pq.top()<<endl;
    }
}