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
        int n,m;
        cin>>n>>m;
        int mn=INT_MAX;
        int ct=0;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ip;
                cin>>ip;
                if(ip<0) ct++;
                mn=min(mn, abs(ip));
                sum+=abs(ip);
            }
        }
        if(ct%2==0) cout<<sum<<endl;
        else{
            cout<<sum-2*mn<<endl;
        }
    }
}