#include<stdio.h>
#include "functions.h"
question4()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 4:\n");
    switch(x)
    {
        case 1:
         printf("Which of these flower is in white colour \n1.Rose \n2.Jasmin \n3.Sunflower \n4.lilly flower \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer,Goning to next question\n");
                     question5();
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
          printf("Which of these are nearest to sun \n1.Venus \n2.Jupitar \n3.Mercury \n4.Mars \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(3==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question5();
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
