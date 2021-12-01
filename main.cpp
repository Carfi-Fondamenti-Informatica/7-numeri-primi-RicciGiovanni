#include <iostream>
#include "lib.h"
using namespace std;


 int main(){
   int numero=0;
   bool a;
  do{
   cin>>numero;}while(numero<=1);
  
   a=primo(2,numero);
  
    if(a==0)
    {
        cout<<"numero non primo"<<endl;
    }
    else
    {
        cout<<"numero primo"<<endl;
    }
    return 0;
   
 }

