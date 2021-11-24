#include<stdio.h>
#include "functions.h"
question1()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 1:\n");
    switch(x)
    {
        case 1:
         printf("How many colours does  rainbow have \n1.5 \n2.7 \n3.4 \n4.6 \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question2();
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
          printf("Who is the Mother of RAMA in Ramayana \n1.Kousalya \n2.Kaikai \n3.Sumitra \n4.Mantra \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question2();
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
          printf("What is the Symbol of Nazis(Army of Great Hitler) \n1.Cross \n2.Skull and Bones \n3.Owl \n4.Swastika \n");
            label3:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question2();
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
           printf("Who Correctly Answered to Yaksha's Questions \n1.Drona \n2.Abimanyu \n3.Yudishtira \n4.Arjuna\n");
            label4:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(3==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question2();
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
          printf("What is the 'National Anthem of india'\n1.Vande mataram \n2.Jan Gan Man \n3.Hum honge kamyab \n4.Saree jahan se achchhha\n");
            label5:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question2();
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