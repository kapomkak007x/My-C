


#include <stdio.h>
#define showline printf("--------------------\n");

int main (){
   char fullname[50];
   int age;
   float salary;

    showline
   printf("    profile information    \n");
    showline
    printf(" enter your full name : ");
    scanf("%[^\n]",&fullname);
    showline
    printf(" enter your age : ");
    scanf("%d",&age);
    showline
    printf(" enter your salary : ");
    scanf("%f",&salary);
    showline
    printf(" your full name is : %s\n",fullname);
    printf(" your age is : %d\n",age);
    printf(" your salary is : %.2f\n",salary);
    showline


    return 0;
}