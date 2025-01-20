#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            int j=0;
            int mn=0;
            while(j+i<n){
                mn=min(mn, v[j][j+i]);
                j++;
            }
            if(mn<0) ans+=(-1)*mn;
        }
        for(int i=1;i<n;i++){
            int j=0;
            int mn=0;
            while(j+i<n){
                mn=min(mn, v[j+i][j]);
                j++;
            }
            if(mn<0) ans+=(-1)*mn;
        }
        cout<<ans<<endl;

    }
}