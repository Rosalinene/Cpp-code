/*Title: Assignment 1 - LAB 1: Simple calculator

Author: Huong Pham

Date: 10/04/2023

Course and Section: CSC 211-302

Description: create a simple calculator Perform addition, subtraction, multiplication, and division.
• Only except two operands and perform the indicated arithmetic on those operands.
• The calculator should keep asking for more operations until an escape character is
entered.

Variables:
    char ch;
    double a, 
    double b; 

Functions:
    */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    double a;
    double b;

    while (1) 
    {
        //Prompt user for operator
        printf("Enter an operator (+, -, *, /), ");
        printf("If you want to exit, please press x: ");       
        scanf(" %c", &ch);

        //Exit setting
        if (ch == 'x')
            exit(0);
        
        //Prompt user for two operands
        printf("Enter the first operand: ");
        scanf("%lf", &a);
        printf("Enter the second operand: ");
        scanf("%lf", &b);
 
        switch (ch) 
        {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;
        //End case '+'
        
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;
        //End case '-'
        
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;
        //End case '*'
        
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
        //End case '/'
        
        default:
            printf
            ("Error! Please write a valid operator\n");
        //End default 
        }//End switch
        printf("\n");
    }//End while
}//End main