#include <stdio.h>
int main()
{
    //...Decalaring Variable
    int operators;
    int n1, n2;
    //...Display Menu Options
    printf("OPERATORS:\n1. Addition\n2. Substraction\n3 Multification.\n4. Division\n5. Exit\n");
    //...While Loop
    while(1)
    {       //...UI
        printf("\nSelect the disired Operator :");
        scanf("%d", &operators);
        //...If Condition
            if (operators == 5)
            {
                printf("Exiting the program.\n");
                break; //...Exit the loop and terminate the program
            }
                //...Else and UI
                printf("Enter Number One :");
                scanf("%d", &n1);
                printf("Enter Number Two :");
                scanf("%d", &n2);
                    //...Switch Condition
                    switch(operators)
                    {
                    case 1 :printf("Answer is %d + %d = %d\n",n1, n2, (n1+n2) );break;
                    case 2 :printf("Answer is %d - %d = %d\n", n1, n2, (n1-n2) );break;
                    case 3 :printf("Answer is %d * %d = %d\n",n1, n2, (n1 * n2) );break;
                    case 4:
                        if (n2 != 0) 
                        {
                            printf("Answer is %.2f / %.2f = %.2f\n", (float)n1, (float)n2, (float)n1/n2);
                        } else {
                            printf("Error: Division by zero is not allowed.\n");
                        }
                        break;
                    default: printf("Error: Invalid operator.\n");
                           
                    }
        
    }
    return 0;
}