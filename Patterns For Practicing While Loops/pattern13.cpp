#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int v=n+i-5;
        while(v){
            cout<<"_";
            v=v-1;
        }
        int col=1;
        int s=i;
        int y=n-i+1;
        while(y){
         cout<<s;
         s=s+1;
         y=y-1;
        }
        cout<<endl;
        i=i+1;

    }
}