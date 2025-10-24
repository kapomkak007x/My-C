#include <stdio.h>
#define Pa printf("-----------------------------------\n");


int main(){
    int number;

    Pa
    printf("   Even & Odd Number\n");
    Pa
    while( 1 ){// วนแบบ infinite loop
        printf("Enter Number : ");
        scanf("%d", &number);
        if (number <= 0){
            printf("อย่าใส่ติดลบมา\n");
            Pa
            break;

        }
        if (number % 2 == 0){
            printf("Number is even number\n");
        }else{
            printf("Number is odd number\n");

        }
        Pa


    }



    return 0;
    

}