/*

Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. 
Incase of conflict, return the substring which occurs first ( with the least starting index ).

*/

#include <bits/stdc++.h>
using namespace std;

void palin(string s){
    int max = 0;
    int n = s.size();
  	string pla;
	for (int i = 0; i < n; i++) {
		for (int len = 1; len <= n - i; len++) {
			string sub =  s.substr(i, len);
          	string rev = string(sub.rbegin(),sub.rend());
            if(!sub.compare(rev) && max<sub.size()){
				pla = sub;
            	max = sub.size();
        	}
        }
    }
    cout<<pla;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string S;
        cin>>S;
        palin(S);
        cout<<endl;
    }
    return 0;
}