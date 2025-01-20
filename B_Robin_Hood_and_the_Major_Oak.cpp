#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll p=k/2;
        if(n%2!=0 && k%2!=0){
            if(p%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
             if(p%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}