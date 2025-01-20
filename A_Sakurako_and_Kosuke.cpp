#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int i=1;
        while(ans>=-n && ans<=n){
            int temp=2*i-1;
            if(i%2==0) ans+=temp;
            else ans-=temp;
            i++;
        }
        if(ans>n) cout<<"Kosuke"<<endl;
        else cout<<"Sakurako"<<endl;
    }
}