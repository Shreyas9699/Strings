/*
Given a string, write a function to check if it is a permutation of a palindrome.
A palindrome is a word or phrase that is the same forwards and backwards. A permutation
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
1.5
1.6
EXAMPLE
Input: Tact Coa
Output: True (permutations: "taco cat", "atco eta", etc.)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palinPerm(string s){
    int alpha[26] = {0};
    for(auto c:s){
        c = tolower(c);
        //cout<<c<<" ";
        if('a'<=c && c<='z') alpha[c-'a']++;
    }
    //cout<<endl;
    int odd_cnt = 0;
    for(auto i : alpha){
        if(i%2==1)
            odd_cnt++;
        if(odd_cnt>1){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter a string\n";
    getline(cin,s);
    if(palinPerm(s)) cout<<"True";
    else cout<<"False";
    return 0;
}