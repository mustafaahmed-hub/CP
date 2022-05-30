#include<bits/stdc++.h>

using namespace std;
int getMaxNumber(int n,vector<int>&l,int minLen){
    int st =0;
    int end = n-1;
    int idx = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(l[mid]<minLen){
            idx = max(mid,idx);
            st = mid+1;
        }
        else
            end = mid-1;
    }
    int ans = (idx==-1)? n : (n-idx-1);
    st = 0;
    end = idx;
    while(end>0&&st<end){
        int diff = minLen-l[end];
        if(diff>(end-st))
            break;
        ans++;
        // cout<<ans<<"***"<<endl;
        st+=diff;
        end--;
    }
    return ans;
    


    

}
void solve(int n,int q, vector<int>&l, vector<int>&k){
    sort(l.begin(),l.end());
    for(int i=0;i<q;i++){
        cout<<getMaxNumber(n,l,k[i])<<endl;
    }
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>l(n);
        vector<int>k(q);
        for(int i=0;i<n;i++)
            cin>>l[i];
        for(int i=0;i<q;i++)
            cin>>k[i];
        solve(n,q,l,k);
    }
}