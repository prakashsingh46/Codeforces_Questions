#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll> A(n);
        vector<int> X;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        unordered_set<int> st;
        for(int i=0;i<q;i++){
            int p;
            cin>>p;
            if(!st.count(p)) X.push_back(p);
            st.insert(p);
        }
        
        for(int i=0;i<X.size();i++){
            for(int j=0;j<n;j++){
                ll p=pow(2, X[i]);
                if(A[j]%p==0){
                    A[j]+=p/2;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
}