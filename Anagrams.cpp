/*
Given two strings a and b consisting of lowercase characters. 
The task is to check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, only the order of characters can be different. 
For example, “act” and “tac” are anagram of each other.
*/

#include <bits/stdc++.h>
using namespace std;

string anagram(string s1, string s2){
    if(s1.size() != s2.size()) return "NO";
    vector<int> letters(26, 0);
    for(auto i:s1){
        letters[i-'a']++;
    }
    for(auto i:s2){
        letters[i-'a']--;
    }
    //for(auto i:letters) cout<<i<<" ";
    //cout<<endl;
    for(auto i:letters){
        if(i!=0) return "NO";
    }
    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s1, s2;
        cin>>s1>>s2;
        cout<<anagram(s1, s2)<<endl;
    }
    return 0;
}