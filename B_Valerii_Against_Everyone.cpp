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
        set<int> st;
        for(int i=0;i<n;i++){
            int ip;
            cin>>ip;
            st.insert(ip);
        }
        if(st.size()==n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}