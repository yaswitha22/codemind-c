#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string ss(string s,int k){
    k--;
    for(int i=k;i>=1;i--){
        for(int o=0;o<=i/2;o++)
            swap(s[o],s[i-o]);
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,k;cin>>a>>k;
        string s;cin>>s;
        cout<<ss(s,k)<<"
";
    }
}