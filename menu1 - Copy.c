#include <stdio.h>
#include <stdlib.h>
void menu(void);
void bill();
char *items[]={"Margherita pizza(medium 6'')","Margherita pizza(large 8'')","Peproni pizza(medium 6'')","Peproni pizza(large 8'')","Panner pizza(medium 6'')","Panner pizza(large 8'')"};
int price[]={100,150,130,180,150,220};
int main(int argc, char const *argv[])
{
    menu();
    bill();
    return 0;
}
void menu(void)
{
    printf("      Welcome to captain coffee\n  ");
    printf("Sno.  Pizzas :                           price\n");
    printf("1.    Margherita pizza(medium 6'')       100\n");
    printf("2.    Margherita pizza(large 8'')        150\n");
    printf("3.    Peproni pizza(medium 6'')          130\n");
    printf("4.    Peproni pizza(large 8'')           180\n");
    printf("5.    Panner pizza(medium 6'')           150\n");
    printf("6.    Panner pizza(large 8'')            220\n");
}
void bill() {    
    int qun=0;
    int ord=0;      
    int k;
    do
    {
        do{
            printf("Enter the Sno. the of the order that you want to order: ");
            scanf("%i",&ord);
        }while (ord<0 || ord>7);
        do{
            printf("Enter the quantity of %s you want to order: ",items[ord-1]);
            scanf("%i",&qun);
        }while(qun<0);
        printf("Your total bill\n");
    printf("pizza                      quantity   total \n");
    
        switch (ord) {
            case 1:
            printf("%s   %i          %i\n",items[0],qun,price[0]*qun);
            break;
            case 2:
            printf("%s   %i          %i\n",items[1],qun,price[1]*qun);
            break;
            case 3:
            printf("%s   %i          %i\n",items[2],qun,price[2]*qun);
            break;
            case 4:
            printf("%s   %i          %i\n",items[3],qun,price[3]*qun);
            break;
            case 5:
            printf("%s   %i          %i\n",items[4],qun,price[4]*qun);
            break;
            case 6:
            printf("%s   %i          %i\n",items[5],qun,price[5]*qun);
            break;

            default:
            break;
        }
    printf("Thank you for ordering from captain coffee\n");
    printf("Do  you want to continue 0 for yes and 1 for no:\n");
    scanf("%i",&k);
    }while (k==0);
}    