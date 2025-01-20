#include<bits/stdc++.h>
#define pp pair<int, int>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
void topologicalSort(vector<vector<int>>& graph, int n){
    //Kahn's Algorithm
    vector<int> indeg(n,0);
    for(int i=0;i<n;i++){
        for(int vt : graph[i]){
            indeg[vt]++;
        }
    }
    queue<int> q;
    unordered_set<int> visited;
    for(int i=0;i<n;i++){
        if(indeg[i]==0){ 
            q.push(i);
            visited.insert(i);
        }
    }
    while(q.size()>0){
        int tp=q.front();
        q.pop();
        cout<<tp+1<<" ";
        for(int vt : graph[tp]){
            if(not visited.count(vt)){
                indeg[vt]--;
                if(indeg[vt]==0){
                    q.push(vt);
                    visited.insert(vt);
                    // cout<<vt<<" ";
                }
            }
            
        }
    }
    
    cout<<endl;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<string> v(n);
        fori(n) cin>>v[i];
        vector<vector<int>> graph(n,vector<int>());
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=i+1;j<n;j++){
                if(v[i][j]=='1') graph[i].push_back(j);
            }
        }
        topologicalSort(graph, n);
        
    }
}