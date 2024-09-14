#include<bits/stdc++.h>
using namespace std;
int Fact(int f,int n){
    if(n==1) return f;
    f=f*n;
    n--;
    Fact(f,n);
}
int main()
{
     int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int c=Fact(1,n);
    cout<<c;
 return 0;
}