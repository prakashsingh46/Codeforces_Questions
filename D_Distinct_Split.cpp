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
        string s;
        cin>>s;
        map<char, int> mp;
        vi pref(n,0);
        vi suff(n,0);
        fori(n){
            mp[s[i]]++;
            pref[i]=mp.size();
        }
        mp.clear();
        fori(n){
            mp[s[n-1-i]]++;
            suff[n-1-i]=mp.size();
        }
        int ans=0;
        fori(n){
            int a=pref[i]+suff[i];
            if(mp[s[i]]<2) a--;
            ans=max(ans, a);
        }

        cout<<ans<<endl;
    }
}