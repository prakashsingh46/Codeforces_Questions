#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
bool isSorted(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}
bool solve(vector<int> v, int k){
    int n=v.size();
    int i=0;
    while(i+k<n){
        if(v[i]!=i+1){
            swap(v[i], v[i+k]);
        }
        i++;
    }
    return isSorted(v);
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi v(n);
        fori(n){
            cin>>v[i];
        }
        map<int, int> mp;
        int ans;
        for(int i=0;i<n;i++){
            if(v[i]!=i+1){
                int dif=abs(v[i]-(i+1));
                ans=dif;
                mp[dif]=v[i];

            }
        }
        if(mp.size()>1) cout<<1<<endl;
        else cout<<ans<<endl;

    }
}