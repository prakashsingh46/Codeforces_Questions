#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
//#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;
bool cmp(vector<int> &v1, vector<int> &v2){
    if(v1[0]>v2[0]) return true;
    else if(v1[0]==v2[0]){
        return v1[1]<v2[1];
    }
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<vector<int>> v(n, vector<int> (2));
        for(int i=0;i<n;i++){
            cin>>v[i][0];
            if(v[i][0]%k==0) v[i][0]=k;
            else v[i][0]%=k;
            v[i][1]=1+i;
        }
        sort(v.begin(), v.end() ,cmp);
        for(int i=0;i<n;i++){
            cout<<v[i][1]<<" ";
        }
        cout<<endl;

    }
}