#include<iostream>
using namespace std;

int main(){
  cout <<"Hello World!!"<<endl;
  cout <<"Let's Start Our Journey"<<endl;
  
  //addition
  int a = 23;
  int b = 37;
  cout << a+b <<endl;
 
 //data types 
  int  g = 324;
  cout<< g<<endl;
  bool c = (a<b);
  cout<< c<<endl;
  float d = 1.3;
  cout<< d <<endl;
  double e = 2.43;
  cout<< e <<endl;
  
  //here the characters stores only one character , it can't store char more than one 
  //and while storing in the memory the char uses ASII chart for converting the string into an number for stoing it in binary format in the memory
  char f = 'a';
  cout<< f <<endl;
  
  //now we will usetype casting
  //here we are giving an char value to a int , but still it doen't show error as its value is consedered via asii chart 
  int h = 'b';
  cout<< h<<endl;
  //here same vive-versa is happening
  char i = 99;
  cout<< i<<endl;
  
  //note as the char data type has memory lenght of 1 byte and int data type has memoy lenght of 4 byte
  //then if the value i given greater than 1yte to cha then takes the last 8itss=1 yte of int data type as input 
  //as in elow case same is happening due to which "@" will e the output
  char m = 123456;
  
  cout << m <<'\n';
  cout << a/b<<'\n';
  cout << d/a<<'\n';
  cout<< e/a <<'\n';
  
  // unsigned int is an int that is always positive , like even if we given negative input in it , it still prints very large positive output 
  // Because of 2's compliment that is used while storing negative num in memory the MS becomnes '1' due to which it ecome verry large num
  //usually the int are signed values , where we can store positive and negatiov both inputs
  unsigned int j = -32;
  cout<< j <<'\n';
  
  //example of logical opeators
  bool l = (a<b)&(a>d);
  cout<< l <<'\n';
  cout << !a<<'\n';
  int n = 0;
  cout<<!n<<'\n';
}
