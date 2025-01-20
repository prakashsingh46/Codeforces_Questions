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
        vi v(4);
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int a31=a1+a2;
        int a32=a4-a2;
        int a33=a5-a4;
        map<int, int> mp;
        mp[a31]++;
        mp[a32]++;
        mp[a33]++;
        int ans=0;
        for(auto p:mp) ans=max(ans, p.second);
        cout<<ans<<endl;
        
    }
}