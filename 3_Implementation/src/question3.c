#include<stdio.h>
#include "functions.h"
question3()
{
    int x,choice;
    x=random_choice();
    printf("QUESTION 3:\n");
    switch(x)
    {
        case 1:
         printf("Who is maternal grandfather \n1.Father of father \n2.Father of mother \n3.Grandfather of father \n4.None of them \n");
            label1:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(2==choice)
                 {
                     printf("\n correct answer You reached first safe point and won '25,000'\n, Goning to next question\n");
                     question4();
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
          printf("Which country is called the 'Land of Rising sun' \n1.japan \n2.china \n3.india \n4.thailand \n");
            label2:
             choice=chose();
             if(choice==1||choice==2||choice==3||choice==4)
             {
                 if(1==choice)
                 {
                     printf("\n correct answer You reached first safe point and won '25,000'\n, Goning to next question\n");
                     question4();
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
