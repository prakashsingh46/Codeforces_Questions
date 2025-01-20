#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char> st;
        int ct=0;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            ct+=st.size();
        }
        cout<<ct<<endl;

    }
}