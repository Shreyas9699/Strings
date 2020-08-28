//Given two strings a and b. The task is to find if a string 'a' can be obtained by rotating another string 'b' by 2 places.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s1, s2;
        cin>>s1>>s2;
        string sr = ""; 
        int j = 0;
        int n = s1.size(), n1 = s2.size();
        if(n!=n1){
            cout<<"0"<<endl;
            continue;
        }
        int flg1 = 1;
        for(int i = 2; i<n+2; i++){
            if(s2[j] != s1[i%n]){
                flg1 = 0;
                break;
            }
            j++;
        }
        int flg2 = 1;
        j = 0;
        for(int i = 2; i<n+2; i++){
            if(s1[j] != s2[i%n]){
                flg2 = 0;
                break;
            }
            j++;
        }
        if(flg1==0 && flg2==0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}