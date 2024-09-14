#include<bits/stdc++.h>
using namespace std;
void Name(int n){
    if(n==0)return;
    cout<<"Anubhav"<<endl;
    n--;
    Name(n);
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    Name(n);
 return 0;
}