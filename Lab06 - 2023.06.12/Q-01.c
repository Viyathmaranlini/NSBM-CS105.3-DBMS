#include <stdio.h>
int main()
{
                
    int no;  //...Declaring Variable
    //... User Input
    printf("Enter the Number :");
    scanf("%d", &no);  
    //...Condition
    if(no % 2 == 0){
        printf("%d is Even", no);
        }
    else{
        printf("%d is Odd", no);                        
        }
        
    return 0;
}