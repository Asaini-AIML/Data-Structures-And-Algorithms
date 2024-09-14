#include<bits/stdc++.h>
using namespace std;
void Print(int n){
    if(n==1)return ;
    n--;
    Print(n);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    Print(n+1);
     return 0;
}