#include<bits/stdc++.h>
using namespace std;
int Reverse(int&n){
    int revno=0;
    while(n>0){
        int last=n%10;
        revno=revno*10+last;
        n=n/10;
    }
    return revno;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int Reversenum=Reverse(n);
    cout<<" reverse Number is  "<<Reversenum;
 return 0;
}