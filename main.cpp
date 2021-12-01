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
   bool a;
   cin>>numero;
  
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
