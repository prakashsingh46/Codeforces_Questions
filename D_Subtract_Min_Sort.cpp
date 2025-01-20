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
        vi v(n);
        fori(n) cin>>v[i];

        for(int i=0;i<n-1;i++){
            int mn=min(v[i], v[i+1]);
            v[i]-=mn;
            v[i+1]-=mn;
        }
        int f=true;
        for(int i=0;i<n-1;i++){
            if(v[i+1]<v[i]){
                f=false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}