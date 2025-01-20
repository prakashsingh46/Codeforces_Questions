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
        vi a(n);
        vi b(n);

        fori(n){
            cin>>a[i];
        }
        fori(n){
            cin>>b[i];
        }
        map<int, int> mpa;
        map<int, int> mpb;

        int ct=1;
        mpa[a[0]]++;
        mpb[b[0]]++;
        for(int i=1;i<n;i++){
            if(a[i-1]==a[i]) ct++;
            else{
                mpa[a[i-1]]=max(ct,mpa[a[i-1]]);
                mpa[a[i]]=max(1,mpa[a[i]]);
                ct=1;
            }
            if(i==n-1){
                mpa[a[i-1]]=max(ct,mpa[a[i-1]]);
                mpa[a[i]]=max(1,mpa[a[i]]);
                ct=1;
            }
        }
        for(int i=1;i<n;i++){
            if(b[i-1]==b[i]) ct++;
            else{
                mpb[b[i-1]]=max(ct,mpb[b[i-1]]);
                mpb[b[i]]=max(1,mpb[b[i]]);
                ct=1;
            }
            if(i==n-1){
                mpb[b[i-1]]=max(ct,mpb[b[i-1]]);
                mpb[b[i]]=max(1,mpb[b[i]]);
                ct=1;
            }
        }
        int ans=1;
        for(auto p:mpa){
            int c=p.second;
            if(mpb.count(p.first)) c+=mpb[p.first];
            ans=max(ans,c);
        }
        for(auto p:mpb){
            int c=p.second;
            if(mpa.count(p.first)) c+=mpa[p.first];
            ans=max(ans,c);
        }
        cout<<ans<<endl;
    }
}

