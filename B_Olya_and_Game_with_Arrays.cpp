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
        vector<vector<ll>> v;
        int t2=n;
        while(t2--){
            int m;
            cin>>m;
            vector<ll> arr(m);
            for(int i=0;i<m;i++) cin>>arr[i];
            v.push_back(arr);
        }
        int i=0;
        vector<vector<ll>> newv;
        while(i<n){
            priority_queue<ll>pq;
            for(int j=0;j<v[i].size();j++){
                pq.push(v[i][j]);
                if(pq.size()>2) pq.pop();
            }
            vector<ll> arr;
            while(pq.size()>0){
                arr.push_back(pq.top());
                pq.pop();
            }
            newv.push_back(arr);
            i++;

        }
        ll mn1=LLONG_MAX;
        ll mn2=LLONG_MAX;
        ll sum=0;
        for(i=0;i<n;i++){
            mn1=min(mn1 , newv[i][0]);
            mn2=min(mn2 , newv[i][1]);
            sum+=newv[i][0];
        }
        sum+=-mn1+mn2;
        cout<<sum<<endl;
    }
}