#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define pp pair<long long, long long>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll xk,yk;
        cin>>xk>>yk;
        ll xq,yq;
        cin>>xq>>yq;

        set<pair<ll,ll>> st;
        vector<pair<ll,ll>> dir={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
        for(int i=0;i<8;i++){
            st.insert({xk+dir[i].first, yk+dir[i].second});
        }
        int ans=0;
        for(int i=0;i<8;i++){
            if(st.count({xq+dir[i].first, yq+dir[i].second})){
                ans++;
                st.erase({xq+dir[i].first, yq+dir[i].second});
            }
        }
        cout<<ans<<endl;

    }
}