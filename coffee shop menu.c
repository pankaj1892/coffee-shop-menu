#include<stdio.h>
main()
{
    int op,x,q=1,a;
    float total,p=0;
    do{
    printf("********** COFFEE MENU **************\n\n");
    printf("    SELECT A COFFEE TYPE \n\n");
    printf(" 1.   ESPRESSO        - $2.50\n");
    printf(" 2.   LATTE           - $3.00 \n");
    printf(" 3.   CAPPUCCINO      - $3.50 \n");
    printf(" 4.   MOCHA           - $4.00  \n");
    printf("\n\n");
    printf("**************************************\n");
   do{
         printf("    SELECT A COFFEE TYPE \n\n");
    scanf(" %d",&op);

    switch(op)
    {
    case 1 :
        {
            printf("Enter the QTY \n");
            scanf("%d",&q);
            p=q*2.50;
         break;
        }
         case 2 :
        {
            printf("Enter the QTY \n");
            scanf("%d",&q);
            p=q*3.00;
         break;
        }
         case 3 :
        {
            printf("Enter the QTY \n");
            scanf("%d",&q);
            p=q*3.50;
          break;
        }
         case 4 :
        {
            printf("Enter the QTY \n");
            scanf("%d",&q);
            p=q*4.00;
           break;
        }
         default :
            printf(" Select the RIGHT choice \n");
            break;
        }
        total=total+p;
           printf("Enter 0 to continue \n");
           scanf("%d",&a);
      }while(a==0);
      printf("TOTAL AMOUNT IS - $%f \n",total);
      printf("****************************************************************\n");
        printf("Enter 1 to continue \n");
        scanf("%d",&x);
    }while(x==1);
    printf("THENK YOU \n");
}
