#include "lib.h"
using namespace std;
bool primo(int d, int n)
{
    if(d==n)
    {
      return true;
    }
    else if(n==1)
    {
        return true;
    }
    else if(n%d==0)
    {
        return false

    }
    else{
    return primo(d+1,n);
    }
}
