#include <iostream>
#include "lib.h"
using namespace std;
int main()
{  
    int a;
    a=primo();
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
