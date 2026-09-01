#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int i,a,b,sum;
    cin>>a>>b;
    cout<<endl<<a<<endl<<b<<endl;
    for(i=1;i<=n;i++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
}