#include<stdio.h>
#include "functions.h"
question5()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 5:\n");
    switch(x)
    {
        case 1:
         printf("Bahubali festival is related to \n1.Islam \n2.Hinduism \n3.Buddhism \n4.Jainism \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer,reach safe level,won 1,00,000\n Goning to next question\n");
                     question6();
                 }
                 else
                 {
                     printf("answer is wrong you won 25,000rs\n");
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
          printf("Which day is observed as the world standards day\n1.june 26 \n2.oct 14 \n3.nov 15 \n4.dec 2 \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer,reach safe level,won 1,00,000\n Goning to next question\n");
                     question6();
                 }
                 else
                 {
                     printf("answer is wrong you won 25,000rs\n");
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
