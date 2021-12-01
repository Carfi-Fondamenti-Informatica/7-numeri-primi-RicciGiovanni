#include <iostream>

using namespace std;
int primo()
{
     int a,d=2,p=1;
    
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
