#include<stdio.h>
#include "functions.h"
question2()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 2:\n");
    switch(x)
    {
        case 1:
         printf("Which of these are called baby of 'donkey' \n1.foal \n2.colt \n3.kid \n4.lamb \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question3();
                 }
                 else
                 {
                     printf("answer is wrong you won 00rs\n");
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
          printf("Which fruit gives us oil \n1.Guava \n2.Coconut \n3.Apple \n4.Papaya \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question3();
                 }
                 else
                 {
                     printf("answer is wrong you won 00rs\n");
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
