#include<bits/stdc++.h>
using namespace std;
int Divisor(int n){
    int m=sqrt(n);
    for(int i=1;i<=m;i++){
       if(n%i==0){
        cout<<i<<endl;
         if (i != n / i) {
            cout<<n/i<<endl;
         }

       }
    
    }
   
    
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
   Divisor(n);
    

 return 0;
}