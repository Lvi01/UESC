//Levi Silva Freitas 
//Eduardo Oliveira Freire 
//Rafael do Nascimento Pedreira 

//Prática 00: B - Crescente


#include <iostream>

using namespace std;

int main(void){
  int a,b,c;
  while(cin >> a >> b >> c){
    if(a>b){
      a=a+b;
      b=a-b;
      a=a-b;
    }
    if(b>c){
      b=b+c;
      c=b-c;
      b=b-c;
    }
    if(a>b){
      a=a+b;
      b=a-b;
      a=a-b;
    }
    cout << a << " " << b << " " << c << endl;
  }
}
