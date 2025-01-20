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
        int n,r,b;
        cin>>n>>r>>b;
        string s="";
        int q=r/(b+1);
        int rem=r%(b+1);
        while(r>0 || b>0){
            int p=q;
            if(rem>0){
                p++;
                rem--;
            }
            r-=p;
            if(r>=0) s+=string(p,'R');
            b--;
            if(b>=0) s+='B';
        }
        cout<<s<<endl;
    }
}