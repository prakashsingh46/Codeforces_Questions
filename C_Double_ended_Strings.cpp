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
        string a,b;
        cin>>a;
        cin>>b;
        int ans=0;
        int n=a.length();
        int m=b.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string x=a.substr(i,j-i+1);
                if(b.find(x)!=string::npos) ans=max(ans,j-i+1);
            }
        }
        cout<<m+n-2*ans<<endl;
        
    }
}