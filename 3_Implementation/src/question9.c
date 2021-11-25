#include<stdio.h>
#include "functions.h"
question9()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 9:\n");
    switch(x)
    {
        case 1:
         printf("The value of pi is given by\n1.bhaskara \n2.varahamihira \n3.aryabhatta \n4.None of them \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(3==choice)
                 {
                     printf("\n correct answer Goning to next question\n");
                     question10();
                 }
                 else
                 {
                     printf("answer is wrong you won 25,00,000rs\n");
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
          printf("The first month of saka year is \n1.vaisakh \n2.chaitra \n3.jyeshtha \n4.paush \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question10();
                 }
                 else
                 {
                     printf("answer is wrong you won 25,00,000rs\n");
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
          printf("The conspiracy angle of rajiv gadhi murder is being probed by \n1.mirdha commission \n2.chelliah commision\n3.jain commision\n4.none of above\n");
            label3:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(3==choice)
                 {
                     printf("\n correct answer, Goning to next question\n");
                     question10();
                 }
                 else
                 {
                      printf("answer is wrong you won 25,00,000rs\n");
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
    }

    
}
