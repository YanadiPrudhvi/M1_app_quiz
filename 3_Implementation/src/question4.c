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
        case 3:
          printf("Which of these build to stop flods\n1.roads \n2.dams \n3.bridges \n4.canal \n");
            label3:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
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
                 goto label3;
             }
         break;
         case 4:
           printf("Indian literacy day observed on\n1.sep 8 \n2.nov 28 \n3.may 2 \n4.sep 22 \n");
            label4:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
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
                 goto label4;
             }
         break;
         case 5:
           printf("The language of lakshadweep, a union teritory of india is\n1.Tamil\n2.Hindi\n3.Malayalam\n4.Telugu\n");
            label5:
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
                 goto label5;
             }
         break;

    }

    
}