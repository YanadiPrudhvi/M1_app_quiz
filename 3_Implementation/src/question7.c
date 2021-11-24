#include<stdio.h>
#include "functions.h"
question7()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 7:\n");
    switch(x)
    {
        case 1:
         printf("The first month of the indian calander is \n1.magha \n2.chaitra \n3.ashadha \n4.vaishaka \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("correct answer, Goning to next question\n");
                     question8();
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
          printf("Whitch of the following is not a dance from kerala\n1.kathakali \n2.mohiniattam \n3.ottan thullal \n4.yaksha gana\n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question8();
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
        case 3:
          printf("The festival of nabanna is celebrated predominantly in\n1.andhra pradhesh \n2.rajasthan \n3.karnataka \n4.orissa \n");
            label3:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question8();
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
                 goto label3;
             }
         break;
         case 4:
           printf("Rath yatra is famous festival at \n1.ayodhya \n2.mathura \n3.dwaraka \n4.puri \n");
            label4:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question8();
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
                 goto label4;
             }
         break;
         case 5:
           printf("onam is the main festival of\n1.tamilnadu\n2.karnataka\n3.andhra pradhesh\n4.kerala\n");
            label5:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question8();
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
                 goto label5;
             }
         break;

    }

    
}