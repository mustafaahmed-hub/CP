#include<bits/stdc++.h>

using namespace std;
bool dfs(string node ,string parent,map<string,bool>&visited,map<string,vector<string>>&adj){
    //base case
    if(adj[node].size()==0){
        visited[node] = true;
        return false;
    }
    if(visited[node]==true)
        return true;
    //recursive case
    // bool ans = false;
    visited[node] = true;
    // if(node.compare(parent)==0)
    //     return true;
    for(string child : adj[node])
        if(dfs(child,node,visited,adj))
            return true;
            
    return false;
    
    
}
bool solve(int m , vector<pair<string,string>>&a){
    map<string,vector<string>>adj;
    map<string,bool> visited;
    for(int i=0;i<m;i++){
        adj[a[i].first].push_back(a[i].second);
        // adj[a[i].second].push_back(a[i].first);
        visited[a[i].first] = false;
        visited[a[i].second] = false;
    }
    int flag = 0;
    for(int i=0;i<m;i++){
        if(visited[a[i].first]==false)
            if(dfs(a[i].first,0,visited,adj)==true)
                return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    int x = 1;
    while(t--){
        int m;
        cin>>m;
        // cout<<m;
        vector<pair<string,string>>a(m);
        for(int i = 0;i<m;i++){
            string n1,n2;
            cin>>n1>>n2;
            
            a[i].first = n1;
            a[i].second = n2;
        }
        

        string ans   = solve(m,a)? "Yes": "No";
        cout<<fixed<<setprecision(7)<<"Case #"<<x<<": "<<ans<<endl;
        x++;
    }
}