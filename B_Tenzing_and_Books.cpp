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
        int x;
        cin>>n>>x;
        vi s1(n);
        vi s2(n);
        vi s3(n);
        fori(n){
            cin>>s1[i];
        }
        fori(n){
            cin>>s2[i];
        }
        fori(n){
            cin>>s3[i];
        }
        int i=0;
        int res=0;
        bool f=false;
        if(res==x) f=true;
        while(!f && i<n && (s1[i]|x)<=x){
            res=res|s1[i];
            i++;
            if(res==x){
                f=true;
            }
        }
        i=0;
        while(!f && i<n && (s2[i]|x)<=x){
            res=res|s2[i];
            i++;
            if(res==x){
                f=true;
            }
        }
        i=0;
        while(!f && i<n && (s3[i]|x)<=x){
            res=res|s3[i];
            i++;
            if(res==x){
                f=true;
            }
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}