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
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char ch;
    double a;
    double b;
    int num_valid_operators = 4;
    char valid_operators[num_valid_operators] = "+-*/";

     while (1) 
    {
        //Prompt user for operator
        printf("Enter an operator (%s), ", valid_operators);
        printf("If you want to exit, please press x: ");       
        scanf(" %c", &ch);

        //Exit setting
        if (ch == 'x')
        {
        printf("Calculator ended!");
             return 0;
        }//End Calculator ended
        else
        {
            bool valid = false;
            for (int i = 0; i < num_valid_operators; i++) 
            {
                if (ch == valid_operators[i]) 
                {
                    valid = true;
                    break;
                }//End if
            }//End for
             if (!valid) 
            {
                printf("Error! Please write a valid operator\n");
                continue;
            }//End if(!valid)
        }//End else

        //Prompt user for two operands
        printf("Enter the two operands: ");
        scanf("%lf %lf", &a, &b);

        switch (ch) 
        {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        //End case '+'
        
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        //End case '-'
        
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        //End case '*'
        
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
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