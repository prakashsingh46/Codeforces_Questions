#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        fori(n) cin>>a[i];
        fori(n) cin>>b[i];

        sort(a);
        sort(b);

        vi great(n);
        int i=0,j=0;
        while(i<n){
            while(j<n and a[j]<=b[i]){
                j++;
            }
            great[i]=n-j;
            i++;
        }
        ll ans=1;
        for(int i=0;i<n;i++){
            ans=((ans%mod) * ((great[n-i-1]-i)%mod))%mod;
        }
        cout<<ans<<endl;
    }
}