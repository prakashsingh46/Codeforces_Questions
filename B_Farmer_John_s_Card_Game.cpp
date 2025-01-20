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

        vector<vector<int>> v(n, vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        bool f=true;
        for(int i=0;i<n;i++){
            sort(v[i]);

            for(int j=1;j<m;j++){
                if(v[i][j]-v[i][j-1]!=n){
                    f=false;
                    break;
                }
            }
            if(!f) break;
        }
        if(!f){
            cout<<-1<<endl;
            continue;
        }

        vector<vector<int>> arr;
        fori(n){
            arr.push_back({v[i][0],i+1});
        }
        sort(arr);
        vi ans;
        f=true;
        ans.push_back(arr[0][1]);
        for(int i=1;i<n;i++){
            if(arr[i][0]-arr[i-1][0]==1) ans.push_back(arr[i][1]);
            else {
                f=false;
                break;

            }
        }
        if(f){
            for(int i:ans) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;

    }
}