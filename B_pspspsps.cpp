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
        if(s[0]=='s') s[0]='.';
        if(s[n-1]=='p') s[n-1]='.';

        int pc=0,sc=0;
        fori(n){
            if(s[i]=='s') sc++;
            if(s[i]=='p') pc++;
        }

        if(sc==0 || pc==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}