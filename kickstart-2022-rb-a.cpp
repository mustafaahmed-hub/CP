#include<bits/stdc++.h>

using namespace std;

double solve(double r, double a, double b){
    double area = 0;
    long long curr_radius = r;
    int flag = 0;
    while(curr_radius!=0){
        area += curr_radius*curr_radius;
        if(flag%2==0)
            curr_radius = curr_radius*a;
        else
            curr_radius = (long) curr_radius/b;
        flag++;
    }
    return M_PI* area;
}

int main(){
    int t;
    cin>>t;
    int x = 1;
    while(t--){
        int r,a,b;
        cin>>r>>a>>b;

        double ans = solve(r,a,b);
        cout<<fixed<<setprecision(6)<<"Case #"<<x<<": "<<ans<<endl;
        x++;
    }
}