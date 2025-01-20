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
        map<int,int> mp;
        for(int it: v){
            mp[it]++;
        }
        int sc=0;
        for(auto it : mp){
            int fr=it.second;
            sc+=fr/2;
        }
        cout<<sc<<endl;
    }
}