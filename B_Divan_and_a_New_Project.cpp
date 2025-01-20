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
        int n;
        cin>>n;
        vll v(n);
        priority_queue<pair<ll, int>> pq;
        fori(n){
            cin>>v[i];
            pq.push({v[i],i});
        }
        int pos=n/2+1;
        vi ans(n+1);
        ans[0]=pos;
        int ch=1;
        int ph=1;
        ll cost=0;
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            ans[p.second+1]=pos+ch;
            cost+=ch*p.first;
            if(!pq.empty()){
                ans[pq.top().second+1]=pos-ch;
                cost+=(pq.top().first)*ch;
                pq.pop();
            }
            ch++;
            
        }
        cout<<cost*2<<endl;
        for(int it : ans) cout<<it<<" ";
        cout<<endl;
    }
}