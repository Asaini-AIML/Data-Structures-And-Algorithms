#include<bits/stdc++.h>
using namespace std;
void Print(int n){
    if(n==0)return;
    cout<<n<<" ";
    n--;
    Print(n);
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    Print(n);
 return 0;
}