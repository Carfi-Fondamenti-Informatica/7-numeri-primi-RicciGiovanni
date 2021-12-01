#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int numero=0;
    cin>>numero;
    if(primo(2,numero)){
        cout<<"numero primo"<<endl;
    }
    else {
        cout<<"numero non primo"<<endl;
    }
    
    return 0;
}
