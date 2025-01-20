#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi ans(n+1);
        if(n%2==0){
            int k=1;
            for(int i=1;i+1<=n;i+=2){
                ans[i]=ans[i+1]=k;
                k++;
            }
            for(int i=1;i<=n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;

        }
        else{
            if(n<27) cout<<-1<<endl;
            else{
                ans[1]=ans[10]=ans[26]=1;
                int k=2;
                for(int i=2;i<=9;i++){
                    ans[i]=ans[i+9]=k;
                    k++;
                }
                for(int i=19;i+1<=22;i+=2){
                    ans[i]=ans[i+1]=k;
                    k++;
                }
                ans[23]=ans[27]=k++;
                ans[24]=ans[25]=k++;
                for(int i=28;i+1<=n;i+=2){
                    ans[i]=ans[i+1]=k;
                    k++;
                }
                for(int i=1;i<=n;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;

            }
        }
    }
}