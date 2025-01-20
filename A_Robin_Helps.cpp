#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ct=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==0 and ct>0){
                ans++;
                ct--;
            }
            else if(v[i]!=0 && v[i]>=k) ct+=v[i];
        }
        cout<<ans<<endl;
    }
}