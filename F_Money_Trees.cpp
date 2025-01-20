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
        ll k;
        cin>>n>>k;
        vector<int> a(n);
        vector<ll> h(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        int ans=0;
        int i=0,j=0;
        ll fruit=1ll*a[i];
        while(i<n){
            if(fruit<=k){
                ans=max(ans,i-j+1);
            }
            else{
                while(j<=i and fruit>=k){
                    fruit-=1ll*a[j];
                    j++;
                }
            }
            
            if(i+1<n and h[i]%h[i+1]==0){
                fruit+=1ll*a[i+1];

            }
            else if(i+1<n and h[i]%h[i+1]!=0){
                fruit=1ll*a[i+1];
                j=i+1;
            }
            i++;
            if(i==n-1 and fruit<=k){
                ans=max(ans,i-j+1);
            }
        }
        cout<<ans<<endl;
    }
}