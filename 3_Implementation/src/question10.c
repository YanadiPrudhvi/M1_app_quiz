#include<stdio.h>
#include "functions.h"
question10()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 10:\n");
    switch(x)
    {
        case 1:
         printf("The following of which of the following comet systems collide with jupiter in july 1994 \n1.Shbutring-Levy 9 \n2.Levy 9 \n3.shoemaker-Levy 7 \n4.Shoemaker-levy 9 \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n CONGRATS YOU WON 1 CRORE\n");
                 }
                 else
                 {
                     printf("answer is wrong ,you won 25,00,000\n");
                     //end()
                 }
             }
             else
             {
                 printf("give proper input....\n");
                 __fpurge(stdin);
                 goto label1;
             }
         break;
        case 2:
          printf("Which of the following european countries is the first buyer of maruti cars \n1.hungary \n2.belgium \n3.england \n4.spain \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
                 {
                      printf("\n CONGRATS YOU WON 1 CRORE\n");
                 }
                 else
                 {
                      printf("answer is wrong ,you won 25,00,000\n");
                     //end()
                 }
             }
             else
             {
                 printf("give proper input....\n");
                 __fpurge(stdin);
                 goto label2;
             }
         break;

    }

    
}
