#include<bits/stdc++.h>
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=0;
        int countW=0, ans=n;
        while(j<n){
            if(s[j]=='W') countW++;
            if(j-i+1==k){
                ans=min(ans, countW);
                if(s[i]=='W') countW--;
                i++;
            }
            j++;
        }
        cout<<ans<<endl;
    }
}