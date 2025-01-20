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
        int n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        map<int, int> mp;
        for(int it: v){
            mp[it]++;
        }
        int i=0;
        while(i+1<n and v[i]==v[i+1]){
            i++;
        }
        int mx=0;
        for(auto it : mp){
            mx=max(mx, it.second);
        }
        int res=min(n-mx, n-i-1);
        cout<<res<<endl;
    }
}