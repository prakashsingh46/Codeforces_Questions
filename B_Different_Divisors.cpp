#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
int nextPrime(int n, vector<bool>& prime){
    for(int i=n;i<prime.size();i++){
        if(prime[i]) return i;
    }
    return -1;
}
int main(){
    int n=1e7+1;
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
            }
    }
     int t;
     cin>>t;
     while(t--){
        int d;
        cin>>d;
        int a1=nextPrime(1+d,prime);
        int a2=nextPrime(a1+d,prime);
        cout<<a1*a2<<endl;
    }
}