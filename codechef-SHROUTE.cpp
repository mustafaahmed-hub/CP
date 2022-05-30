#include<bits/stdc++.h>
#define ll long long
using namespace std;
int find(int x, vector<int>&fm, vector<int>&bm){
    int mn = INT_MAX;
    int st = 0;
    int end = fm.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(x>=fm[mid]){
            mn = min(x-fm[mid],mn);
            st = mid+1;
        }
        else  
            end = mid-1;
    }
    st = 0;
    end = bm.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(x<=bm[mid]){
            mn = min(bm[mid]-x,mn);
            end = mid -1;
        }
        else
            st = mid+1;
    }
    mn = (x==1)? 0 : mn;

    return (mn==INT_MAX)? -1 : mn; 
}
void solve(int n,int m,int *a, int *b){
    vector<int>fm;
    vector<int>bm;
    for(int i=0;i<n;i++){
        if(a[i]==1)
            fm.push_back(i+1);
        else if(a[i]==2)
            bm.push_back(i+1);
    }
    vector<int>ans;
    for(int i=0;i<m;i++){
        int x =find(b[i],fm,bm); 
        cout<<x<<" ";
        ans.push_back(x);
    }
    cout<<endl;
    
    
    
    
}

int main(){
        int t;
        cin>>t;
        while(t--){
            int n,m;
            cin>>n>>m;
            int a[n];
            int b[m];
            for(int i=0;i<n;i++)
                cin>>a[i];
            for(int i=0;i<m;i++)
                cin>>b[i];
            solve(n,m,a,b);    
        }
        
    
}