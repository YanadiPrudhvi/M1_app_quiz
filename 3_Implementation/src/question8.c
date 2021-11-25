#include<stdio.h>
#include "functions.h"
question8()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 8:\n");
    switch(x)
    {
        case 1:
         printf("The lalit kala academy is devoted to the promotion of \n1.dance &drama \n2.fine art \n3.literature \n4.music \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer You reached third safe point and won '25,00,000'\n, Goning to next question\n");
                     question9();
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
          printf("Which one of the following is essentially a solo dance \n1.kuchipudi \n2.kathak \n3.manipuri \n4.mohiniattam \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                      printf("\n correct answer You reached third safe point and won '25,00,000'\n, Goning to next question\n");
                     question9();
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
