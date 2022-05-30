#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string solve(int n, int m, int x, int y, string *person){
    string ans = "";
    for(int i=0;i<n;i++){
        int cp = 0;
        int pp = 0;
        for(char x: person[i]){
            if(x=='F')
                cp++;
            else if( x=='P')
                pp++;
        }
        ans += (cp>=x||(cp>=(x-1)&&(pp>=y)))?'1':'0';
    }
    return ans;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        string person[n];
        for(int i=0;i<n;i++)
            cin>>person[i];
        cout<<solve(n,m,x,y,person)<<endl;;    
    }
}
