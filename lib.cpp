#include "lib.h"
using namespace std;
int primo()
{
     int a,d=2,p=1;
    cout<<"inserisci un numero intero"<<endl;
    cin>>a;
    while(d<a)
    {
        if(a%d==0)
        {
            p=0;
            d=d+1;
        }
        else
        {
            d=d+1;
        }
       
    }
        
    if(p==1)
        {
         cout<<"vero"<<endl;   
        }
        else
        {
           cout<<"falso"<<endl; 
        }
        return p;
}
