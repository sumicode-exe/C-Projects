// C Programme to make a simple calculator
// Using Switch Case
// calcSW.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Driver main code
int main()
{

    char ch;
    double a, b, p, r, /*n,*/ t, i, cp, sp, CI, pr, ls, pp, lp, X;

    // variables declaration for matrix multiplication
    int row1;
    int column1;

    int row2;
    int column2;

    int l, m, n;
    int matrix1[10][10];
    int matrix2[10][10];
    int result[10][10];

    // WHILE LOOP?????
    while (1)
    {

        // Getting input from the user
        // To understand the operation to be done
        printf("Enter an operator (+, -, *, /, !, c, s, X),"
               "if want to exit, press x: ");
        scanf("%c", &ch);

        // to exit
        if (ch == 'x')
            exit(0);

        // printf("Enter the first two operators: ");

        // Using switch case we will differentiate
        // operations based on different operator

        switch (ch)
        {

        // To calculate Sum (Addition)
        case '+':

            printf("Enter the first two operators: ");
            scanf("%lf %lf", &a, &b);
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);

            break;

        // To calculate Difference (Subtraction)
        case '-':

            printf("Enter the first two operators: ");
            scanf("%lf %lf", &a, &b);
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);

            break;

        // To calculate Product (Multiplication)
        case '*':

            printf("Enter the first two operators: ");
            scanf("%lf %lf", &a, &b);
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);

            break;

        // To calculate Divisor (Division)
        case '/':

            printf("Enter the first two operators: ");
            scanf("%lf %lf", &a, &b);
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);

            break;

        // To calculate Compound Interest
        case 'c':

            printf("Enter the details in the following order: \n");

            // printf("Final Amount");
            // scanf("%lf", &a);

            printf("Initial Principal Balance \n");
            scanf("%lf", &p);

            printf("Interest rate \n");
            scanf("%lf", &r);

            // printf("Number of times interest applied per time period \n");
            // scanf("%d", &n);

            printf("Number of periods elapsed/Yrs of tenure \n");
            scanf("%lf", &t);

            // printf("Your Compound Interest is: \n");
            // printf("%1.lf(1+(%1.lf/%1.lf)^%1.lf*%1.lf)", p, r, n, t, p * ((pow((1 + r/n), t * n))) );

            // logic -----> maths
            double a = p * ((pow((1 + r / 100), t)));
            double CI = a - p;

            printf("Amount after Compound Interest is : %lf", CI);

            break;

        // To calculate Simple Interest
        case 's':

            printf("Enter the details in the following order: \n");

            printf("Initial Principal Balance \n");
            scanf("%lf", &p);

            printf("Interest rate \n");
            scanf("%lf", &r);

            printf("Number of periods elapsed/Yrs of tenure \n");
            scanf("%lf", &t);

            // logic -----> maths
            double i = (p * r * t) / (100);
            double SI = p + i;

            printf("Amount after Simple Interest is : %lf", SI);

            break;

        case 'X':

            printf("Enter the dimensions of the matrix 1: \n");
            scanf("%d \n %d", &row1, &column1);

            printf("Enter the dimensions of the matrix 2: \n");
            scanf("%d \n %d", &row2, &column2);

            if (column1 != row2)
            {
                printf("Invalid dimensions \n");
            }
            else
            {
                for (l = 0; l < row1; l++)
                {
                    for (m = 0; m < column1; m++)
                    {
                        printf("Enter the elements of Matrix A: [%d][%d] \n", l, m);
                        scanf("%d", &matrix1[l][m]);
                    }
                }
                printf("Enter the elements of Matrix-B:\n");
                for (l = 0; l < row2; l++)
                {
                    for (m = 0; m < column2; m++)
                    {
                        printf("Enter the elements of Matrix B: [%d][%d] \n", l, m);
                        scanf("%d", &matrix2[l][m]);
                    }
                }
                for (l = 0; l < row1; l++)
                {
                    for (m = 0; m < column2; m++)
                    {
                        result[l][m] = 0;
                        for (n = 0; n < row2; n++)
                        {
                            result[l][m] += matrix1[l][n] * matrix2[n][m];
                        }
                    }
                }
                printf("The product of the two matrices is:-\n");

                for (l = 0; l < row1; l++)
                {
                    for (m = 0; m < column2; m++)
                    {
                        printf("%d\t", result[l][m]);
                    }
                    printf("\n");
                }

                break;

            // To calculate profit/loss
            case '!':

                printf("To calculate Profit/Loss, enter the Cost price \n");
                scanf("%lf", &cp);

                printf("Enter the Selling price \n");
                scanf("%lf", &sp);

                if (cp > sp)
                {
                    // logic -----> maths
                    ls = cp - sp;
                    lp = (ls / cp) * 100;
                    printf("Your net Loss is: %lf \n", ls);
                    printf("Your Loss percent is: %lf \n", lp);
                    // printf("%1.lf - %1.lf = %.1lf\n", cp, sp, cp-sp);
                    // printf("Loss \n");
                }
                else if (sp > cp)
                {
                    // logic -----> maths
                    pr = sp - cp;
                    pp = (pr / cp) * 100;
                    printf("Your net Gain is: %lf \n", pr);
                    printf("Your Profit percent is: %lf \n", pp);
                    // printf("%1.lf - %1.lf = %.1lf\n", cp, sp, sp-cp);
                    // printf("Profit \n");
                }

                break;

            // IF the operator doesnt match any case constant
            default:
                printf("Error! please write a valid operator \n");
            }

            printf("\n");
        }
    }
}