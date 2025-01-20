#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
int solve(string x,string s){
    for(int i=0;i<6;i++){
        if(x.find(s)!=string::npos){
            return i;
            
        }
        x+=x;
    }
    return -1;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n,m;
        cin>>n>>m;
        string x, s;
        cin>>x;
        cin>>s;
        cout<<solve(x,s)<<endl;

    }
}