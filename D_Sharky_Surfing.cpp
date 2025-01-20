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
        int n,m;
        ll L;
        cin>>n>>m>>L;
        vector<vll> hurd(n, vll (2));
        vector<vll> power(m, vll (2));
        for(int i=0;i<n;i++){
            cin>>hurd[i][0]>>hurd[i][1];
        }
        for(int i=0;i<m;i++){
            cin>>power[i][0]>>power[i][1];
        }
        ll p=1;
        int ct=0;
        bool res=true;
        priority_queue<ll> pq;
        int j=0;
        for(int i=0;i<n;i++){
            ll mxp=hurd[i][1]-hurd[i][0]+1;
            while(j<m and power[j][0]<hurd[i][0]){
                pq.push(power[j][1]);
                j++;
            }
            if(p<=mxp){
                while(p<=mxp and !pq.empty()){
                    p+=pq.top();
                    pq.pop();
                    ct++;

                }
                if(p<=mxp and pq.empty()){
                    res=false;
                    break;
                }
            }
            

        }
        if(res==true) cout<<ct<<endl;
        else cout<<-1<<endl;
    }
}