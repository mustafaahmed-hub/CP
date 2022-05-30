#include<bits/stdc++.h>

using namespace std;

int solve(vector <string> &a, int n){
    int cost =  0;
    string mn = a[0];
    string mx = a[0];
    for(int i =0;i<n;i++){
        if(a[i]<mx)
            cost++;
        if(mx<a[i])
            mx = a[i];
        if(mn>a[i])
            mn = a[i];
        
    }
        
        
        return cost;
}
int main(){
    int t;
    cin>>t;
    int x = 1;
    
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        vector<string> a;
        for(int i=0;i<n;i++){
            string tmp;
            
            getline(cin,tmp);
            a.push_back(tmp);

        }
        
        // for(int i=0;i<a.size();i++)
        //     cout<<a[i]<<endl;

        int y = solve(a,n);
        cout<<"Case #"<<x<<": "<<y<<endl;
        x++;
    }
    
}