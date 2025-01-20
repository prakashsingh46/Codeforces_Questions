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
    int n;
    ll d;
    cin>>n>>d;
    priority_queue<ll> pq;
    fori(n){
        ll inp;
        cin>>inp;
        pq.push(inp);
    }
    int ans=0;
    while(n>0){
        ll tp=pq.top();
        pq.pop();
        int p=d/tp+1;
        n-=p;
        if(n>=0) ans++;
        
    }
    cout<<ans<<endl;
}