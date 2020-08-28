//Given a string s, recursively remove adjacent duplicate characters from the string s. 
//The output string should not have any adjacent duplicates.


#include <bits/stdc++.h>
using namespace std;

string fn(string s){
    if(s.empty())
        return "";
    int i,j,k;
    int n=s.length();
	stack<char>st;
	int flag=0;
	    
    for(i=0;i<n;i++)
	    st.push(s[i]);
	s="";
	char c=st.top();
	flag=0;
    st.pop();
    int key=0;
    while(!st.empty())    
    {
        //cout<<st.top()<<" ";
        if(st.top()==c)
        {
	        flag=1;
            key=1;
        }
        else if(st.top()!=c  )
        {
            if(flag==0)
            s+=c;
            c=st.top();
            flag=0;
        }
        st.pop();
    }
    if(flag==0)
    s+=c;
    reverse(s.begin(),s.end());
    if(key)
        s=fn(s);
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<fn(s)<<endl;
    }
    return 0;
}