#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
using namespace std;
bool check(vector<int>& arr, int n){
    int i=1;
    while(i+1<=n){
        if(arr[i]==i) i++;
        else{
            if(arr[i]==i+1 and arr[i+1]==i) i+=2;
            else return false;
        }
    }
    return true;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        bool res=check(v, n);
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}