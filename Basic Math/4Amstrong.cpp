#include<bits/stdc++.h>
using namespace std;
bool Amstrong(int n){
    int am=0;
    int m=n;
    while(n>0){
        int last=n%10;
        am=am+(last*last*last);
        n=n/10;
    }
    if(am==m)return true;
    else {return false;}

}
int main()
{
     int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool amstrong=Amstrong(n);
    if(amstrong) cout<<"yes it is Amstrong"<<endl;
    else{
        cout<<"No it is Not"<<endl;
    }
 return 0;
}