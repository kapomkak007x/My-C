// No parameter - No retrun
#include <stdio.h>


void funcB();
void funcC();

void funcA(){
    printf("Hey...\n");
    funcC();
}


int main(){
    funcA();
    funcB();
    funcC();
    





    return 0;

}


void  funcB(){  printf("Hi....\n");  }

void  funcC(){  printf("Hello....\n");  }