#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int main(){
    int ri=4e5+1;
    vector<bool> prime(ri + 1, true);
    for (int p = 2; p * p <= ri; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= ri; i += p)
                prime[i] = false;
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n,0);
        set<int> st;
        int k=0;
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                v[k]=i;
                k++;
            }
            else{
                st.insert(i);
            }
        }
        if(n<=4){
            cout<<-1<<endl;
            continue;
        }
        for(int it : st){
            if(!prime[v[k-1]+it]){
                v[k]=it;
                k++;
                st.erase(it);
                break;
            }
        }
        for(int it : st){
            v[k]=it;
            k++;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
}