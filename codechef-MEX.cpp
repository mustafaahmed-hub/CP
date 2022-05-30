#include<bits/stdc++.h>

using namespace std;
long solve(int n,int k , int *s){
    
    int curr = 0;
    sort(s,s+n);
    for(int i=0;i<n;){
        if(curr==s[i]){
            while(curr==s[i])
                i++;
            curr++;
        }
            
        else{
            while(s[i]!=curr){
                if(k==0)
                    return curr;
                k--;
                curr++;
            }
            
        }
        
    }

    
    return curr+k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        cout<<solve(n,k,s)<<endl;
    }
}