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
     int n;
     cin>>n;
     string s;
     cin>>s;
     
     bool f=false;
     for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            f=true;
            break;
        }
     }
     if(!f) cout<<"NO"<<endl;
}