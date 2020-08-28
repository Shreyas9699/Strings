//Given a string S, find length of the longest substring with all distinct characters.  
//For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.


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
        int max = 0;
        vector<int> cnt(26,0);
        for(int i = 0; i<s.size(); i++){
            int j= i;
            int temp = 0;
            while(cnt[s[j]-'a'] == 0 && j<s.size()){
                cnt[s[j]-'a']++;
                j++;
                temp++;
            }
            if(temp>max) max = temp;
            fill(cnt.begin(), cnt.end(), 0);
        }
        cout<<max<<endl;
    }
    return 0;
}