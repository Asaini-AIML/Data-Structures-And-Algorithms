#include<bits/stdc++.h>
using namespace std;
bool Palindrome(int i,string s){
    if(i>=s.length()/2)return true;
    if(s[i]!=s[s.length()-i-1]) return false;
    return Palindrome(i+1,s);
}
int main()
{
    string s="madm";
    cout<<Palindrome(0,s);
 return 0;
}