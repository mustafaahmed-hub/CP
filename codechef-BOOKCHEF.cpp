#include<bits/stdc++.h>

using namespace std;
bool comp(pair<int,string>a , pair<int,string>b){
    return a.first>b.first;
}
int main(){
    int n,m;
    cin>>n>>m;
    set<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    vector<pair<int,string>>sp_post;
    vector<pair<int,string>>normal;
    for(int i=0;i<m;i++){
        int f , p;
        string s;
        cin>>f>>p>>s;
        if(a.find(f)!=a.end())
            sp_post.push_back({p,s});
        else
            normal.push_back({p,s});
    }

    sort(sp_post.begin(),sp_post.end(),comp);
    sort(normal.begin(),normal.end(),comp);


    for(pair<int,string> x : sp_post)
        cout<<x.second<<endl;
    for(pair<int,string> x : normal)
        cout<<x.second<<endl;



    
}