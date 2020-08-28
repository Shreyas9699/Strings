//Given a string S. The task is to print all permutations of a given string.

#include <bits/stdc++.h>
using namespace std;

vector<string> permu(string S){
    vector<string> per;
    sort(S.begin(), S.end());
    do{
        per.push_back(S);
    }while(next_permutation(S.begin(), S.end()));
    return per;
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
        vector<string> ans;
        ans = permu(S);
        sort(ans.begin(), ans.end());
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}