#include "stdio.h"



int main(){
    int x;

    for(x=1 ; x <= 100 ; x++ ){
        if(x % 8 != 0){
            continue;

        }
        printf("%d\n", x);
        
    }


    return 0;
    
}