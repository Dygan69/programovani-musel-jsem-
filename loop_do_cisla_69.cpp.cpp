#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    znovu:
        bool reset = 1;
        int pokracovani, loops = 0, r = 0;
        srand(time(NULL));
        while(r!=69){
            r = rand ()%(100+1-0);
            cout<< r<<"\n";
            loops++;
        }
        cout<<"\n You've done "<<loops<<" loops.\n Type in \n 1 - Try again\n 2 - Close program\n ";
    cin>>pokracovani;
    while(reset==1){
        reset=0;
        switch(pokracovani){
            case(1):{
                goto znovu;
            }break;
            case(2):{
                return 0;
            }break;
            default:{
                cout<<"\n Try again\n ";
                reset=1;
            }
        }
    }
    return 0;
}
