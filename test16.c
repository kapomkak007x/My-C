#include <stdio.h>

void funB(char* name, int age );
void funcA( int a, int b){
    funcB("sombat",20);
    printf("%d\n",a + b);
    funcfB("Somjai",35);

}

int main(){
    funcA( 10, 20);
    
    return 0;
    
}


void funcB(char* name, int age){
    printf("hello %s\n", name);
    printf("your age is %d\n", age);
}