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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        int mx=*max_element(arr.begin() , arr.end());
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]==mx && i%2==0){
                flag=true;
                break;
            }
        }
        int ans;
        if(n%2!=0 && flag){
            ans=n/2+mx+1;
        }
        else{
            ans=n/2+mx;
        }
        cout<<ans<<endl;
    }
}