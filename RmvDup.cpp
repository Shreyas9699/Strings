/*
Given a string, the task is to remove duplicates from it. 
Expected time complexity O(n) where n is length of input string and extra space O(1) 
under the assumption that there are total 256 possible characters in a string.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    char c;
    while(T--){
        int count[256] = {0};
        while (((c = getchar()) != '\n') && (c != EOF))
        {
            if (count[c]++ == 0)
                putc(c, stdout);
        }
        cout<<endl;
    }
    return 0;
}