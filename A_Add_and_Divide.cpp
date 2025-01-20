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
        int a,b;
        cin>>a>>b;
        
        int ans=30;
        for(int i=0;i<=30;i++){
            int lg=0;
            int p=a;
            if(b+i==1) continue;
            while(p>0){
                lg++;
                p=p/(b+i);
            }
            ans=min(ans,lg+i);
        }
        cout<<ans<<endl;
    }
}