#include<bits/stdc++.h>

using namespace std;

double solve(double v, double d){
    
    double val = ((d*9.8)/(v*v));
    val = (val>1)?1:val;
    val = (val<-1)?-1:val; 
    // cout<<val<<endl;
    
    return 90*asin(val)/M_PI;
}

int main(){
    int t;
    cin>>t;
    int x = 1;
    while(t--){
        double v,d;
        cin>>v>>d;

        double ans = solve(v,d);
        cout<<fixed<<setprecision(7)<<"Case #"<<x<<": "<<ans<<endl;
        x++;
    }
}