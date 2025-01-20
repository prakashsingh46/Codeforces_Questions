#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,b,c;
        cin>>n>>b>>c;
        if(c>=n){
            cout<<n<<endl;
            continue;
        }
        if(b==0){
            if(c>=n-2) cout<<n-1<<endl;
            else cout<<-1<<endl;
            continue;
        }
        ll ct=((n-c-1)/b)+1;
        
        cout<<n-ct<<endl;

    }
}