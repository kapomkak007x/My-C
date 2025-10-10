//preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("---------------------\n");
#define Smile "^_^"


//global declation
int Number = 555;
void showHi();

void showHey(){    //user-defined function
    printf("Hey\n");
}

int main(){     //main function
    ShowSenPa
     printf("welcone To SAU\n%s\n", Smile);
     ShowSenPa
     showHey();
     showHi();
     ShowSenPa
     

    return 0;
}


void showHi(){ //   user-defined function
    printf("Hi\n");
}