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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                if(v[i]!=v[n-i+1] and i!=n-i+1) swap(v[i],v[n-i+1]);
                else if(v[i+1]!=v[n-(i+1)+1] and i!=n-i-1) swap(v[i+1], v[n-(i+1)+1]);
            }
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]) ans++;
        }
        cout<<ans<<endl;
    }
}