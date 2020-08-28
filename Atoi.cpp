//Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.


// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int val = 0;
    int flg = 1;
    for(auto i:str){
        switch(i){
            case '-':
                flg = -1;
                break;
            case '0':
                val = val*10;
                break;
            case '1':
                val = val*10 + 1;
                break;
            case '2':
                val = val*10 + 2;
                break;
            case '3':
                val = val*10 + 3;
                break;
            case '4':
                val = val*10 + 4;
                break;
            case '5':
                val = val*10 + 5;
                break;
            case '6':
                val = val*10 + 6;
                break;
            case '7':
                val = val*10 + 7;
                break;
            case '8':
                val = val*10 + 8;
                break;
            case '9':
                val = val*10 + 9;
                break;
            default:
                return -1;;
        }
    }
    return flg*val;
}