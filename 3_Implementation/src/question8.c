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
        case 3:
          printf("central salt and marine chemicals research institute is located at\n1.ahmedabad \n2.bhavanagar \n3.ghandhi nagar \n4.panaji \n");
            label3:
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
                 goto label3;
             }
         break;
         case 4:
           printf("Newspapers are not published from  whitch of the following indian states  \n1.assam\n2.manipur \n3.mizoram \n4.arunachal pradhesh \n");
            label4:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(4==choice)
                 {
                     printf("\n correct answer You reached first safe point and won '25,00,000'\n, Goning to next question\n");
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
                 goto label4;
             }
         break;
         case 5:
           printf("The national open university run by \n1.CBSE\n2.UGC\n3.IGNOU\n4.NCERT\n");
            label5:
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
                 goto label5;
             }
         break;

    }

    
}