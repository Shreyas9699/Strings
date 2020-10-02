/*
Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd
Example:
Input:
    3
    abcd
    aba
    geeks
Output:
    3
    0
    3
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        if(s.compare(string(s.rbegin(), s.rend()))==0){
            cout<<"0"<<endl;
            continue;
        }
        int count[26] = {0};
        int cnt = 0;
        int n = s.size();
	    for (int i = 0; i < n; i++) {
	    	count[s[i]-'a']++;
        }
        for(int i = 0; i<26; i++){
            if(count[i]>1) cnt++;
        }
        cout<<n-cnt-1<<endl;
    }
    return 0;
}