#include "lib.h"
 bool primo(int d, int n)
{
   

    
  if(n%d==0)
  {
      cout<<(n==d)<<endl;
      
      return (n==d);
      
  }
    cout<<(n!=d)<<endl;
    return primo(d+1,n);
   
}
