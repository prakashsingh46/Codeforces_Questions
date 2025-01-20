#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int> mp;
        for(char ch : s) mp[ch]++;
        int odd=0;
        for(auto it : mp){
            if(it.second%2!=0) odd++;
        }
        if(k>=odd-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}