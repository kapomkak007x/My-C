#include <stdio.h>
int calSum(int num1, int num2, int num3){
    return num1 + num2 + num3;
}
double calAverage(int num1, int num2, int num3){
    return (num1 + num2 + num3)/ 3.0;
}
void showSumAndAverage(int sum, double average){
    printf("Sum:%d\n",sum);
    printf("Average: %.2lf\n", average);
}

void inputNumber(){
    int num1, num2, num3;
    int sum;
    double average;
    printf("Enter Number 1:"); scanf("%d", & num1);
    printf("Enter Number 2:"); scanf("%d", & num2);
    printf("Enter Number 3:"); scanf("%d", & num3);
    sum = calsum(num1,num2,num3);
    average = (num1,num2,num3);
    showSumAndAverage(sum,average);


}


int main(){
    inputNumber();


    return 0;

}