//C Programme to make a simple calculator
//Using Switch Case
//calcSW.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Driver main code
int main(){

    char ch;
    double a, b, p, r, /*n,*/t, cp, sp, CI, i, pr, ls, pp, lp;


    //WHILE LOOP?????
    while (1){

        //Getting input from the user
        //To understand the operation to be done
        printf("Enter an operator (+, -, *, /, !, c, s)," "if want to exit, press x: ");
        scanf("%c", &ch);

        //to exit
        if (ch == 'x')
           exit(0);


        //printf("Enter the first two operators: ");
                

        //Using switch case we will differentiate
        //operations based on different operator


        switch (ch){

            //To calculate Sum (Addition)
            case '+':

               printf("Enter the first two operators: ");
               scanf("%lf %lf", &a, &b);
               printf("%.1lf + %.1lf = %.1lf\n", a, b, a+b);

            break;




            //To calculate Difference (Subtraction)
            case '-':

                printf("Enter the first two operators: ");
                scanf("%lf %lf", &a, &b);
                printf("%.1lf - %.1lf = %.1lf\n", a, b, a-b);

            break;




            //To calculate Product (Multiplication)
            case '*':
               
                printf("Enter the first two operators: ");
                scanf("%lf %lf", &a, &b);
                printf("%.1lf * %.1lf = %.1lf\n", a, b, a*b);

            break;




            //To calculate Divisor (Division)
            case '/':

                printf("Enter the first two operators: ");
                scanf("%lf %lf", &a, &b);
                printf("%.1lf / %.1lf = %.1lf\n", a, b, a/b);
                
            break;




            //To calculate Compound Interest
            case 'c':

                printf("Enter the details in the following order: \n");
                
                //printf("Final Amount");
                //scanf("%lf", &a);

                printf("Initial Principal Balance \n");
                scanf("%lf", &p);

                printf("Interest rate \n");
                scanf("%lf", &r);

                //printf("Number of times interest applied per time period \n");
                //scanf("%d", &n);

                printf("Number of periods elapsed/Yrs of tenure \n");
                scanf("%lf", &t);

                //printf("Your Compound Interest is: \n");
                //printf("%1.lf(1+(%1.lf/%1.lf)^%1.lf*%1.lf)", p, r, n, t, p * ((pow((1 + r/n), t * n))) );

                //logic -----> maths
                double a = p * ((pow((1 + r / 100), t)));
                double CI = a - p;

                printf("Amount after Compound Interest is : %lf",CI);

            break;




            //To calculate Simple Interest
            case 's':

                printf("Enter the details in the following order: \n");

                printf("Initial Principal Balance \n");
                scanf("%lf", &p);

                printf("Interest rate \n");
                scanf("%lf", &r);

                printf("Number of periods elapsed/Yrs of tenure \n");
                scanf("%lf", &t);

                //logic -----> maths 
                double i = (p * r * t)/(100);
                double SI = p+i;

                printf("Amount after Simple Interest is : %lf",SI);

            break;




            //To calculate profit/loss
            case '!':

                printf("To calculate Profit/Loss, enter the Cost price \n");
                scanf("%lf", &cp);

                printf("Enter the Selling price \n");
                scanf("%lf", &sp);
               
                if (cp>sp){
                    //logic -----> maths
                    ls = cp - sp;
                    lp = (ls/cp)*100;
                    printf("Your net Loss is: %lf \n", ls);
                    printf("Your Loss percent is: %lf \n", lp);
                    //printf("%1.lf - %1.lf = %.1lf\n", cp, sp, cp-sp);
                    //printf("Loss \n");
                }
                else if (sp>cp){
                    //logic -----> maths
                    pr = sp-cp;
                    pp = (pr/cp)*100;
                    printf("Your net Gain is: %lf \n", pr);
                    printf("Your Profit percent is: %lf \n", pp);
                    //printf("%1.lf - %1.lf = %.1lf\n", cp, sp, sp-cp);
                    //printf("Profit \n");
                }

            break;


            //IF the operator doesnt match any case constant
            default:
                printf("Error! please write a valid operator \n");

        }

        printf("\n");
    }
}