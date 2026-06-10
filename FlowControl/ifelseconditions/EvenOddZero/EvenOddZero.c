//Odd/Even Number with User Input
#include <stdio.h>

int main(void)
{
        //Declare Variables
        int number;

        //Prompt the user for input
        printf("Enter an integer: ");
        scanf("%d", &number);

        // Test for Zero first, then find out if it is even or odd.
        if (number == 0){
                printf("this is Zero\n");
        }else if (number % 2 == 0 ){
                printf("this number is Even\n");
        }else{
                printf("this number is Odd\n");
        }
        
        return(0);
}

