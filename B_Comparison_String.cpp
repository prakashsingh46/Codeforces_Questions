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
        int ans=1;
        int ct=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) ct++;
            else{
                ans=max(ans, ct);
                ct=1;
            }
            if(i==n-2){
                ans=max(ans, ct);   
            }
        }
        cout<<ans+1<<endl;
    }
}