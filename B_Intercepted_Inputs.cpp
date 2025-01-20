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
        int k;
        cin>>k;
        vi v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        map<int, int> mp;
        for(int it: v){
            mp[it]++;
        }
        k=k-2;
        int n,m;
        for(int i=1;i<=sqrt(k);i++){
            if(k%i==0){
                if(mp[i]>0){
                    mp[i]--;
                    if(mp[k/i]>0){
                        n=i;
                        m=k/i;
                        break;

                    }
                    else{
                        mp[i]++;
                    }
                }
            }
        }
        cout<<n<<" "<<m<<endl;
    }
}