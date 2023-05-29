/*1.       Diseñar un programa que tenga una
función y como parámetros dos números, y que calcule el máximo.
int CalcularMaximo(int a, int b)*/

#include <iostream>
#include <string>
using namespace std;
int CalculaMax(int a,int b,int c);
int main()
{   int n1,n2,n3;
    cout<<"ingrese un numero";
    cin>>n1;
    cout<<"ingrese un numero";
    cin>>n2;
    cout<<"ingrese un numero";
    cin>>n3;
    cout<<"el maximo es: "<<CalculaMax(n1,n2,n3);

    return 0;
}
int CalculaMax(int a,int b,int c){
  int m;
  if(a>b){
      m=a;
  }
   else if(c>a){
      m=c;
  }
  else if(b>a){
      m=b;
  }
  return m;
}