#include <iostream>
#include "lib.h"
using namespace std;
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
            cout<<"false"<<endl;
        }
        return (n==d);
    }
    else
    {

    }
    return primo(d+1,n);
}
