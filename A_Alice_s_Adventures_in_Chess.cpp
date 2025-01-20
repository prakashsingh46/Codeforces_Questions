#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int i=0;
        int x=0,y=0;
        bool f=false;
        while(i<200){
            if(s[i%n]=='N'){
                y++;
            }
            else if(s[i%n]=='E') x++;
            else if(s[i%n]=='S') y--;
            else x--;

            if(x==a and y==b){
                f=true;
                break;
            }
            i++;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}