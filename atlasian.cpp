#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
using namespace std;

double f(double x, int n){
        if(n == 0) return 1.0;
        if(n%2 == 0){
            return f(x*x, n/2);
        }
            cout<<"hi";
        return x * f(x, n-1);
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            for(char ch: v[i]){
                if(((int)ch)%2==0) temp
                sum+=((int)ch)%2;
            }
        }
        if(sum%2==0) cout<<"EVEN"<<endl;
        else cout<<"ODD"<<endl;
    }
}