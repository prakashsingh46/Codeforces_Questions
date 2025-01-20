#include<bits/stdc++.h>
#define ll long long
// #define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
// #define sort(arr) sort(arr.begin() , arr.end())
using namespace std;
bool cmp(vector<ll> &v1, vector<ll> &v2){
    return v1[0]<v2[0];
}
bool cmp2(vector<ll> &v1, vector<ll> &v2){
    return v1[1]<v2[1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<ll>> v(n, vector<ll> (2));
        for(ll i=0;i<n;i++){
            cin>>v[i][0];
            v[i][1]=i;
        }
        sort(v.begin(),v.end(), cmp);
        vector<int> check(n,0);
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(sum>=v[i][0]){
                check[i]=1;
            }
            sum+=v[i][0];
        }
        vector<ll> check2(n,0);
        check2[n-1]=check[n-1];
        for(ll i=n-2;i>=0;i--){
            if(check[i+1]!=0){
                check2[i]=check2[i+1]+(ll)check[i];
            }
            else{
                check2[i]=(ll)check[i];
            }
        }
        vector<vector<ll>> ans(n, vector<ll> (2));
        for(ll i=0;i<n;i++){
            ans[i][0]=i;
            ans[i][1]=v[i][1];
            if(i+1<n && check[i+1]!=0) ans[i][0]+=check2[i+1];
        }
        sort(ans.begin(), ans.end(), cmp2);
        for(ll i=0;i<n;i++){
            cout<<ans[i][0]<<" ";
        }
        cout<<endl;

    }
}