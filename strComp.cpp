//Compress given string
//eg I/P: aaaaabbbbccba
//O/P: a5b4c2b1a1

#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::string s;
    std::cout<<"Enter a string\n";
    std::cin>>s;
    std::string res;
    int cnt = 1;
    for(int i = 1; i<=s.size();i++){
        if(s[i-1] == s[i]) cnt++;
        else{
            res += s[i-1] + std::to_string(cnt);
            cnt = 1;
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}