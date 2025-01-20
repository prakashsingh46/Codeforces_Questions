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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v;
        // vector<vector<int>> v();
        fori(n){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        int sum=0;

        // int xs=v[0][0],ys=v[0][1], xe=m+v[0][0], ye=m+v[0]
        for(int i=1;i<n;i++){
            v[i][0]+=v[i-1][0];
            v[i][1]+=v[i-1][1];
        }
        for(int i=1;i<n;i++){
            int x=m-(v[i][0]-v[i-1][0]);
            int y=m-(v[i][1]-v[i-1][1]);
            if(x>0 and y>0) sum+=2*(x+y);
        }
        int peri=n*4*m;
        cout<<peri-sum<<endl;
    }
}