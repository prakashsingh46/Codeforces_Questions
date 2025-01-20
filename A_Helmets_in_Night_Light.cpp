#include<bits/stdc++.h>
#define ll long long
#define sort(arr,cmp) sort(arr.begin() , arr.end(),cmp)
using namespace std;
bool cmp(vector<int>& v1, vector<int>& v2){
    return v1[1]<v2[1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        vector<vector<int>> arr(n, vector<int> (2));
        for(int i=0;i<n;i++){
            cin>>arr[i][0];
        }
        for(int i=0;i<n;i++){
            cin>>arr[i][1];
        }
        sort(arr ,cmp);
        ll ans=p;
        int m=n-1;
        for(int i=0;i<n;i++){
            if(arr[i][1]>=p || m==0) break;
            if(m>arr[i][0]){
                ans+=(ll)arr[i][0]*arr[i][1];
                m-=arr[i][0];
            }
            else{
                ans+=(ll)m*arr[i][1];
                m=0;
            }
        }
        ans+=(ll)m*p;
        cout<<ans<<endl;
    }
}