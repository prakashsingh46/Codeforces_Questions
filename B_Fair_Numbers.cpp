#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
bool check(ll n){
    string s=to_string(n);
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' and n%(s[i]-'0')!=0) return false;
    }
    return true;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        ll n;
        cin>>n;
        
        // 2025 is devisible by [1,2,....,9] so it is superfair number
        while(!check(n)){
            n++;
        }
        cout<<n<<endl;
    }
}