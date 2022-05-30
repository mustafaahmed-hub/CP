#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string solve(string s){
    int freq1[26];
    int freq2[26];
    memset(freq1,0,sizeof(freq1));
    memset(freq2,0,sizeof(freq2));
    int st = 0;
    int end = s.length()-1;
    while(st<end){
        freq1[s[st]-'a']++;
        freq2[s[end]-'a']++;
        st++;
        end--;
    }
    for(int i=0;i<26;i++)
        if(freq1[i]!=freq2[i])
            return "NO";
    return "YES";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;   
    }
}

