#include<bits/stdc++.h>

using namespace std;
bool checkPalindrom(long long a){
    long long rev = 0;
    long long tmp = a;
    while(tmp>0){
        int rem = tmp%10;
        tmp/=10;
        rev = rev*10 + rem;
         
    }
    return (rev==a);
}
double solve(long long a){
    int sr = sqrt(a);
    int cnt = 0;
    for(int i = 1;i<=sr;i++){
        if(a%i==0){
            if(checkPalindrom(i))
                cnt++;
            if(a/i != i)
                if(checkPalindrom(a/i))
                    cnt++;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    int x = 1;
    while(t--){
        long long a;
        cin>>a;

        int ans = solve(a);
        cout<<"Case #"<<x<<": "<<ans<<endl;
        x++;
    }
}