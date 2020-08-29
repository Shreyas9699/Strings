//given a string and a character find number of occurance in recursive way
//I/P : shrassha s
//O/P : s has occured in shrassha for 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int numOcc(char c, string s){
    if(!s.empty()){
        if(s[0]==c){
            return 1+numOcc(c, s.substr(1));
        }
        else{
            return numOcc(c, s.substr(1));
        }
    }
    return 0;

}

int main(){
    string s;
    char c;
    cout<<"Enter string and char\n";
    cin>>s>>c;
    cout<<c<<" has occured in "<<s<<" for "<<numOcc(c, s)<<" times\n";
    return 0;
}