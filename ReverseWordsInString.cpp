//Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
    string s, it;
    cin>>s;
    stringstream ss (s);
    vector<string> words;
     while(getline(ss, it, '.')){
        words.push_back(it);
    }
    for(int i = words.size()-1; i>0;i--){
        cout<<words[i]<<".";
    }
    cout<<words[0]<<endl;
    }
    return 0;
}