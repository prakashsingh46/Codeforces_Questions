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
    int arr[300001];
    arr[0]=0;
    for(int i=1;i<300001;i++){
        arr[i]=i^arr[i-1];
    }
     int t;
     cin>>t;
     while(t--){
        int a,b;
        cin>>a>>b;
        int x=arr[a-1];
        int ans;
        if(x==b) ans=a;
        else if(x!=b and (x^b)!=a) ans=a+1;
        else if(x!=b and (x^b)==a) ans=a+2;
        cout<<ans<<endl;
    }
}