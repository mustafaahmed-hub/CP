#include<bits/stdc++.h>

using namespace std;
int check(int i,int j,double ax[3],double ay[3]){
    if(ay)
    return 0;
}
int solve(int ax[3],int ay[3]){
    long long ans =0;
    ans+=check(0,1,ax,ay);
    ans+=check(0,2,ax,ay);
    ans+=check(1,2,ax,ay);
    
    return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ax[3],ay[3];
        for(int i=0;i<3;i++)
            cin>>ax[i]>>ay[i];
        
        cout<<solve(ax,ay)<<endl;
    }
    return 0;
}