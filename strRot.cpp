//Check if given string2 is rotation of string1
//I/P: s1 = erbottelwat  s2 = waterbottel  O/P: waterbottel is rotation of erbottelwat

#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::string s1, s2;
    std::cout<<"Enter 2 strings\n";
    std::cin>>s1>>s2;
    //std::cout<<s1<<" "<<s2<<"\n";
    if(s1.size() != s2.size()){
        std::cout<<s2<<" is not rotation of "<<s1<<std::endl;
        return 0;
    }
    int n = s1.size();
    int pos = -1;
    for(int i = 0; i< n;i++){
        if(s1[i] == s2[0]){
            if(i-1>0 && s1[i-1]==s2[n-1])
                pos = i;
        }
    }
    std::cout<<pos<<" "<<s1[pos]<<" "<<s2[pos]<<"\n";
    int j = 0;
    for(int i = pos; i < n+pos;i++){
        if(s2[j] != s1[i%n]){
            std::cout<<s2<<" is not rotation of "<<s1<<std::endl;
            return 0;
        }
        j++;
    }
    std::cout<<s2<<" is rotation of "<<s1<<std::endl;
    return 0;

}