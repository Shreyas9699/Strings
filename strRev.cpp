//Reversing a string without using extra Space

#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::string s1;
    std::cout<<"Enter a string"<<std::endl;
    std::cin>>s1;
    char c;
    int i = 0, j = s1.size()-1;
    while(i!=j){
        c = s1[i];
        s1[i] = s1[j];
        s1[j] = c;
        i++; j--;
    }
    std::cout<<s1;
    return 0;
}