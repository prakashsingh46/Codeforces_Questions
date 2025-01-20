#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]=v[i]%k;
        }
        int ans=10000;
        if(k==4){
            int countEven=0;
            for(int i=0;i<n;i++){
                if(v[i]==0){
                    ans=0;
                    break;
                }
                else if(v[i]==3){
                    ans=1;
                    // break;
                }
                else{
                    if(v[i]%2==0) countEven++;
                    if(countEven==2) break;
                }
            }
            ans=min(ans,2-countEven);
        }
        else{
            for(int i=0;i<n;i++){
                if(v[i]==0){
                    ans=0;
                    break;
                }
                else{
                    ans=min(ans, k-v[i]);
                }
            }
        }
        cout<<ans<<endl;

    }
}