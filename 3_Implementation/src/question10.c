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
        case 3:
          printf("When was the indian peace keeping force sent to sri lanka\n1.may,1986 \n2.july.1987 \n3.may,1988 \n4.may,1990 \n");
            label3:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
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
                 goto label3;
             }
         break;
         case 4:
           printf("Which of the following languages reported to have more computer suitable \n1.german \n2.russian \n3.arabic \n4.english \n");
            label4:
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
                 goto label4;
             }
         break;
         case 5:
           printf("Which of the following newspaper is 150 years old\n1.The statesman\n2.The times of india\n3.The hindu\n4.malayala manorama\n");
            label5:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
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
                 goto label5;
             }
         break;

    }

    
}