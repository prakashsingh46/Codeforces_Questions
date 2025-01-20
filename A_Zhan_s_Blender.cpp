#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x,y;
        cin>>n;
        cin>>x>>y;
        int p=min(x, y);
        if(n%p==0){
            cout<<n/p<<endl;
        }
        else{
            cout<<(n/p)+1<<endl;
        }
    }
}