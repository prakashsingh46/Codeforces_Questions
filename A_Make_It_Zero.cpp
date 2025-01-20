#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
using namespace std;
bool check(vi &v){
    for(int i=0;i<v.size();i++){
        if(v[i]!=0) return false;
    }
    return true;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int k=0;
        vector<vi> ans;
        if(check(v)){
            cout<<0<<endl;
        }
        else if(n%2==0){
            k=2;
            ans.push_back({1,n});
            ans.push_back({1,n});
        }
        else{
            int z=-1;
            for(int i=0;i<n;i++){
                if(v[i]==0){
                    z=i;
                    break;
                }
            }
            if(z!=-1){
                if(z==0){
                    
                }
                k=4;
                ans.push_back({1,z});
                ans.push_back({min(z+2,n),n});
            }
        }
        
        
    }
}