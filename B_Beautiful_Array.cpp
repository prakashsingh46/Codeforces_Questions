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
        ll k,b,s;
        cin>>n>>k>>b>>s;
        if(s<k*b || s>(n*(k-1)+k*b)){
            cout<<-1<<endl;
            continue;
        }
        vll v(n,0);
        v[n-1]=k*b;
        s-=k*b;
        fori(n){
            if(s-k+1>=0) v[i]+=k-1;
            else v[i]+=s;
            s-=k-1;
            if(s<=0) break;
        }
        for(ll it : v) cout<<it<<" ";
        cout<<endl;

    }
}