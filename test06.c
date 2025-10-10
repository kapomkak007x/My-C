//globa;-local variable
#include<stdio.h>

int dataA = 100;


void showdata (){
    int dataB = 555;
    printf("dataA = %d\n",dataA);
    printf("dataB = %d\n",dataB);
    

}

int main(){
    int dataC = 999;
    const int dataD = 1010;

    dataC = 888;

    printf("dataA = %d\n",dataA);
    dataC =777;
    printf("dataC = %d\n",dataC);
    

    return 0;   

}


