#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
int check(vi &v){
    int n=v.size();
    int i=0,j=n-1;
    int hcf=0;
    while(i<j){
        hcf=__gcd(hcf, abs(v[j]-v[i]));
        i++,j--;
    }
    return hcf;
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
        int ans=check(v);
        cout<<ans<<endl;

    }
}