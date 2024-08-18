#include<bits/stdc++.h>
using namespace std;
int Reverse(int n){
    int revno=0;
    while(n>0){
        int last=n%10;
        revno=revno*10+last;
        n=n/10;
    }
    return revno;
}
bool Palindrome(int n){
      int revno=Reverse(n);
      if(revno==n){
        return 1;
      }
      else{
        return 0;
      }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool result=Palindrome(n);
    if(result){
    cout<<"yes it is palindrome";}
    else{
        cout<<" no it is not palindrome ";
    }
 return 0;
}