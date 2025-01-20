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

        int zero=0;
        fori(n){
            if(v[i]==0) zero++;
        }
        if(zero==0) cout<<1<<endl;
        else if(zero==n) cout<<0<<endl;
        else{
            int l,r;
            fori(n){
                if(v[i]!=0){
                    l=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(v[i]!=0){
                    r=i;
                    break;
                }
            }
            bool f=true;
            for(int i=l;i<=r;i++){
                if(v[i]==0){
                    f=false;
                    break;
                }
            }
            if(f) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}