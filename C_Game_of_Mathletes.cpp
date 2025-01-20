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
        int n,k;
        cin>>n>>k;
        map<int, int> mp;
        vi v(n);
        fori(n){ 
            cin>>v[i];
            mp[v[i]]++;
        }
        int ans=0;
        for(int el : v){
            // int el=p.first;
            int re=k-el;
            if(mp.count(re)){
                if(re==el){
                    int sc2=mp[el]/2;
                    ans+=sc2;
                    mp[el]%=2;
                    if(mp[el]==0) mp.erase(el);
                    continue;
                }
                int sc=min(mp[el], mp[re]);
                ans+=sc;
                mp[el]-=sc;
                mp[re]-=sc;
                if(mp[el]==0) mp.erase(el);
                if(mp[re]==0) mp.erase(re);
            }
        }
        cout<<ans<<endl;

    }
}