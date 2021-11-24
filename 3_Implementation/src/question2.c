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
        case 3:
          printf("In Which continent, India is occored \n1.Asia \n2.Antarctica \n3.Europe \n4.Africa \n");
            label3:
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
                 goto label3;
             }
         break;
         case 4:
           printf("Which festival comes with gifts and santa claus to you \n1.Christmas \n2.Diwali \n3.Bhai Duj \n4.Holi\n");
            label4:
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
                 goto label4;
             }
         break;
         case 5:
          printf("How many Planets are there in the 'solar system'\n1.7 \n2.8 \n3.9 \n4.10\n");
            label5:
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
                 goto label5;
             }
         break;

    }

    
}