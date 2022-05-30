#include<bits/stdc++.h>

#define ll long long

using namespace std;
bool comp(pair<ll,ll> a,pair<ll,ll> b){
    bool ans = false;
    if(a.second>b.second)
        ans = true;
    else if(a.second==b.second)
        if(a.first<b.first)
            ans = true;
        else
            ans = false;

    return ans;
}
int main(){
    int n;
    cin>>n;
    pair<ll,ll> a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].first;
    for(int i=0;i<n;i++)
        cin>>a[i].second;
    sort(a,a+n,comp);
    for(int i=0;i<n;i++)
        cout<<a[i].first<<" "<<a[i].second<<" ";
        cout<<endl;

}