/*
Your task is to implement the function strstr. 
The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. Th
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
     int n2 = x.size();
     for(int i= 0; i< s.size(); i++){
         if(s[i]==x[0]){
             if(x.compare(string(s.begin()+i, s.begin()+i+n2))==0)
                return i;
         }
     }
     return -1;
}