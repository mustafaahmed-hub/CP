#include <iostream>

using namespace std;

int solve(int n){
    if(n%2==0)
        return 0;
    int ans = -1;
    while(n>0){
        int r = n%10;
        n/=10;
        if(r%2==0){
            if(n==0)
                ans = 1;
            else 
                ans = 2;
            
        }
    }
    return ans;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}

