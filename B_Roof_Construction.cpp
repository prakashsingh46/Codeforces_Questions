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
        int n;
        cin>>n;
        vi v(n);
        for(int i=n-1;i>=0;i--){
            v[i]=i;
            if(__builtin_popcount(i)==1){
                for(int j=i-1;j>=0;j--){
                    v[j]=i-1-j;
                }
                break;
            }
        }
        for(int it : v) cout<<it<<" ";
        cout<<endl;
    }
}