#include<bits/stdc++.h>
using namespace std;
int Print(int sum,int n){
    if(n==0)return sum;
    sum+=n;
    n--;
    Print(sum ,n);   
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int sum=0;
   int rp= Print(sum,n);
   cout<<rp;
 return 0;
}