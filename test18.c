#include <stdio.h>

double num1 = 555;
double calSquareAreaare(double num1, double num2);


double sumNumber(double num1, double num2){
    printf("%.2lf\n", num1);
     return num1 + num2;
}
int main(){
    double area;
    printf("%.2lf\n", num1);
    printf("%.2lf\n", sumNumber(10, 20));
    printf("%.2lf\n", sumNumber(1000, 20000));
    printf("%.2lf\n", calSquareAreaare(10, 20));

    area = calSquareAreaare(10,20);
    printf("%.2lf\n", area);

    return 0;

}

double calSquareAreaare(double num1, double num2){
    printf("%.2lf\n", num1);
    return num1 * num2;

}