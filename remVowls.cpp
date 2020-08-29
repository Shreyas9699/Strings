#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string remVowls(string s){
    if(!s.empty()){
        if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'){
            return "" + remVowls(s.substr(1));
        }
        else{
            return s[0] + remVowls(s.substr(1));
        }
    }
    return "";

}

int main(){
    string s;
    cout<<"Enter string\n";
    cin>>s;
    cout<<remVowls(s);
    return 0;
}