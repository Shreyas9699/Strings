//Given 2 strings write program that gives true if 2 strings have same number of characters else false

#include<iostream>
#include<bits/stdc++.h>

bool check(){
    std::string s1, s2;
    std::cout<<"Enter strings\n";
    std::cin>>s1>>s2;

    if(s1.size()!=s2.size()) return false;
    if(s1.empty() || s2.empty()) return false;
    if(s1.size()==1){
        if(s1!=s2) return false;
    }
    std::vector<int> char_set(256,0);
    for(auto i : s1){
        char_set[(int)i]++;
    }
    for(auto i : s2){
        char_set[(int)i]--;
    }
    for(int i = 0; i<256;i++){
        if(char_set[i]!=0) return false;
    }
    return true;

}

int main(){
    bool x = check();
    if(x) std::cout<<"True";
    else std::cout<<"False";
}