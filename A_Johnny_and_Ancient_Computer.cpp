#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
int count2Power(ll n){
    int ct=0;
    while(n>1){
        n>>=1;
        ct++;
    }
    return ct;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        ll a,b;
        cin>>a>>b;

        int ans=0;

        if(a==b) ans=0;
        else if(a>b){
            int bt=__builtin_popcountll(a/b);
            if(a%b==0 and bt==1){
                ll q=a/b;
                int ct=count2Power(q);
                ans=(ct/3)+(ct%3)/2+(ct%3)%2;
                
            } 
            else ans=-1;
        }
        else{

            int bt=__builtin_popcountll(b/a);
            if(b%a==0 and bt==1){
                ll q=b/a;
                int ct=count2Power(q);
                ans=(ct/3)+(ct%3)/2+(ct%3)%2;   
            }
            else ans=-1;
        }
        cout<<ans<<endl;
    }
}