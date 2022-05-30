#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string solve(string word, string read){
    int freq[26];
    memset(freq,0,sizeof(freq));
    for(char x: read)
        freq[x-'a']++;
    for(char x: word){
        if(freq[x-'a']==0)
            return "No";
    }
    return "Yes";
}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string word[n];
    for(int i=0;i<n;i++)
        cin>>word[i];
    for(int i=0;i<n;i++){
        cout<<solve(word[i],s)<<endl;
    }
}
