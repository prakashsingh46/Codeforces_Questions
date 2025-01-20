#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;
ll solve(vector<int> &v, ll mid, int n) {
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a = 1LL * v[i] + 2 * mid;
        // Overflow check
        if (a > 1e9) return LLONG_MAX; // Return a large value to indicate overflow
        ans += a * a;
        if (ans < 0 || ans > 1e18) return LLONG_MAX; // Overflow detection
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll c;
        cin>>n>>c;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll l=0, r=1e9;
        ll mid;
        while(l<r){
            mid=l+(r-l)/2;
            ll ans=solve(v,mid,n);
            if(ans==c){
                l=mid;
                break;
            }
            else if(ans<c){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        cout<<l<<endl;
    }
}