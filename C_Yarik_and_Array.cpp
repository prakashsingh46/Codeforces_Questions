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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxSum=INT_MIN;
        int curr=0;
        for(int i=0;i<n;i++){
            if(i-1>=0){
                if(abs(v[i-1]%2)==abs(v[i]%2)){
                    curr=v[i];
                }
                else{
                    curr+=v[i];
                }
            }
            else{
                curr+=v[i];
            }
            
            maxSum=max(maxSum, curr);
            if(curr<0){
                curr=0;
            }

        }
        cout<<maxSum<<endl;
    }
}