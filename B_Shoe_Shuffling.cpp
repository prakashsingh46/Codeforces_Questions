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
        fori(n) cin>>v[i];

        map<ll,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(i+1);
        }
        vi ans;
        bool flag=false;
        for(auto p : mp){
            vector<int> pos=p.second;
            if(pos.size()<2){
                flag=true;
                break;
            }
            else{
                ans.push_back(pos.back());
                pos.pop_back();
                for(int it : pos) ans.push_back(it);
            }
        }
        if(flag) cout<<-1<<endl;
        else{
            for(int it:ans) cout<<it<<" ";
            cout<<endl;
        }
    }
}