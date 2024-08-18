#include<bits/stdc++.h>
using namespace std;
 int count(int digit){
        int cnt=0;
        while(digit>0){
            digit=digit/10;
            cnt++;
        }
    return cnt;
 }

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int countnum=count(n);
    cout<<"Number of digit  "<<countnum;

 return 0;
}