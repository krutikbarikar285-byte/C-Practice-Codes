#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int product=1;
    int add=0;
    while(n!=0){
        int num;
        num=n%10;
        product=product*num;
        add=add+num;
        n=n/10;
    }
    cout<<"Result:"<<product-add;
}