#include <stdio.h>
#define showline printf("--------------------------------\n");
int main()
{
    int bus_number;

    showline
        printf("     Bus Number Information\n");
    showline
        printf("   Enter Bus Nu mber: ");
    scanf("%d", &bus_number);
    showline
    switch (bus_number){
       case 57 :printf("Go to pinklo, Bangkhunnon\n");
               break;
       case 3 : printf("Go to Sanam Luang, Ladproao\n");
               break;
       case 71 : printf("Go to Hua Lamphong, yaowarat\n");
               break;
       case 56 : printf("Go to Bang Lamphu, Sapan Krungthon\n");
               break;
       case 539:printf("Go to Samsen, Anusawari Chai\n");
               break;
        
    }
     showline
     
        return 0;
}