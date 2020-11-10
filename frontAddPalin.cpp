#include <iostream>
#include <cstring>
using namespace std;

bool isPalin(string s, int n){
    string rev = s.substr(0,n); 
    if(rev.compare(string(rev.rbegin(), rev.rend())) == 0)
        return true;
    return false;
}

int Insertion_cnt(string s, int n){
    int cnt = 0;
    while(n>0){
        if(isPalin(s, n))
            break;
        n--;
        cnt++;
    }
    return cnt;
}

int main(){
    string s;
    cin >> s;
    cout << Insertion_cnt(s, s.size()) << endl;
    return 0;
}