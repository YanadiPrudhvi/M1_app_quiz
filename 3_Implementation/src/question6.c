#include<stdio.h>
#include "functions.h"
question6()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 6:\n");
    switch(x)
    {
        case 1:
         printf("Which of the following is sports day every year \n1.22nd april \n2.26th july \n3.29th aug \n4.None of them \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(3==choice)
                 {
                     printf("correct answer , Goning to next question\n");
                     question7();
                 }
                 else
                 {
                     printf("answer is wrong you won 1,00,000rs\n");
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
          printf("Which day health day observed \n1.apr 7 \n2.may 6 \n3.may 15 \n4.apr 28 \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question7();
                 }
                 else
                 {
                     printf("answer is wrong you won 1,00,000rs\n");
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
