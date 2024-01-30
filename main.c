/**
 ******************************************************************************
 * @file           : task3
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
int main()
{
    unsigned int num1;
    unsigned int num2;
    char op;
    printf("enter the first number : ");
    scanf("%d",&num1);
    printf("\n enter the operation : ");
    scanf(" %c", &op);
    printf("\n enter the second number : ");
    scanf("%d",&num2);
    switch(op)
    {
    case '+':
        printf("\n %d",num1+num2);
        break;

    case '-':
        printf("\n %d",num1-num2);
        break;

    case '*':
        printf("\n %d",num1*num2);
        break;

    case '/':
        if(0==num2)
        {
            printf("the second number can not be zero please reenter it:");
            scanf("%d",&num2);
        }
        else
        {
            printf("%d",num1/num2);
        }
        break;

    default:
        printf("invalid operation");
        break;
    }
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      30jan2024           third task d
*/
