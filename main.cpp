  #include <iostream>
using namespace std;
//#include "lib.h"
 bool primo(int d, int n)
{
  if(n%d==0)
  {
      if(n==d)
      {
          cout<<"vero"<<endl;
      }
      else
      {
          cout<<"falso"<<endl;
      }
      return (n==d);
  }
  else
  {
      
  }
    return primo(d+1,n);
}
 int main(){
   int numero=0;
   cin>>numero;
   primo(2,numero)? cout<<"numero primo" :cout<<"numero non primo";
   return 0;
 }
