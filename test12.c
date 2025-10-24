#include <stdio.h>
#define senpa printf("------------------------------\n");



int main(){
    int number,result;
    int i;

    senpa
    printf("           Multiplication Table\n");
    senpa
    printf("Enter number : ");
    scanf("%d" , &number);
    senpa

    for(i = 1 ;i <= 12 ; i = i + 1 ){ // ++i, i++ , i += 1
        result = number * i ;
        printf("%d x %d = %d\n" , number ,i , result);



    }

     senpa




    return 0;

}