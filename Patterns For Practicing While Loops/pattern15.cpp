#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ente the Value Of N:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int s=1;
        int v=n-i+1;
        while(v){
            cout<<s;
            s=s+1;
            v=v-1;
        }
        int o=i-1;
        while(o){
            cout<<"*";
            o=o-1;
        }
        int m=i-1;
        while(m){
            cout<<"*";
            m=m-1;
        }
        int u=n-i+1;
        while(u){
            cout<<u;
            u=u-1;
            
        }
        cout<<endl;
        i=i+1;    
    }
}
