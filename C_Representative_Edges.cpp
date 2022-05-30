#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(int idx1,int idx2, vector<int>&a){
    double d = (a[idx2]-a[idx1])/(double)(idx2-idx1);
    int tmp1 = idx1-1;
    int n = a.size();
    int cnt = 0;
    double e = 0.00000001;
    
    // cout<<idx1<<" "<<idx2<<endl;
    // cout<<d<<endl;
    while(tmp1>=0){
        double ar = a[idx1]+(tmp1-idx1)*d;
        if(abs(ar-a[tmp1])>e)
            cnt++;
        // cout<<tmp1<<" "<<ar<<" "<<a[tmp1]<<endl;
        tmp1--;
    
    }
    tmp1 = idx1+1;
    while(tmp1<n){
        double ar = a[idx1] +(double)(tmp1-idx1)*d;
        if(abs(ar-a[tmp1])>e)
            cnt++;
        // cout<<tmp1<<" "<<ar<<" "<<a[tmp1]<<endl;    
        tmp1++;
    }
    // cout<<cnt<<endl;
    return cnt;

}

int solve(int n, vector<int>&a){
    
    
    
    int ans = n-1;
    // iterating through all the posibilities 
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans = min(ans, check(i,j,a));
        }
    }
    cout<<ans<<endl;
    
    

    return 0;
    
  
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>a;
        cin>>n;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        // cout<<solve(n,a)<<endl;
        solve(n,a);
    }
    return 0;
}
