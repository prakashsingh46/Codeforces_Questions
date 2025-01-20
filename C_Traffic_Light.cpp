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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int idx=0;
        fori(n){
            if(s[i]=='g') break;
            else idx++;
        }
        vi v(n,0);
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g'){
                idx=0;
                v[i]=idx;
            }else{
                idx++;
                v[i]=idx;
            }
        }
        int ans=0;
        fori(n){
            if(s[i]==c){
                ans=max(ans,v[i]);
            }
        }
        cout<<ans<<endl;
    }
}