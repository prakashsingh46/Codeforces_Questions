#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        if(n%4==0) c=n/4;
        else c=(n/4)+1;
        cout<<c<<endl;

    }
}