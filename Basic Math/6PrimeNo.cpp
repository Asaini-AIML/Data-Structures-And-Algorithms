#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
         if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
         }
    }
    if(cnt==2){
        cout<<"its prime number";
    }
    else{
        cout<<"not is not prime number";
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    prime(n);
    

 return 0;
}