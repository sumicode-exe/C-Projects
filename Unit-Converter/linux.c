#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature();

int main()
{
    char unit;

    printf("This calculator converts units: \n");
    printf("of Temperature - (T):\t Celcius(C)\t  Farhenheit(F)\t Kelvin(k)\n");

    printf("Enter what do you want to convert: \n");
    scanf("%c", &unit);

    if (unit == 'T')
    {
        Temperature();
    }
}

int Temperature()
{

    char celcius[] = "celcius";
    char farenheit[] = "farenheit";
    char kelvin[] = "kelvin";

    double val;

    printf("Enter the numerical value of conversion;");
    scanf(" %lf", &val);

    getchar();
    printf("enter string from: ");
    char from[100];
    char ch1;
    int i = 0;

    while (ch1 != '\n')
    {
        scanf("%c", &ch1);
        from[i] = ch1;
        i++;
    }

    from[i] = '\0';
    puts(from);

    printf("enter string to: ");
    char to[100];
    char ch2;
    int j = 0;

    while (ch2 != '\n')
    {
        scanf("%c", &ch2);
        to[j] = ch2;
        j++;
    }

    from[j] = '\0';
    puts(to);

    if ((strcmp(celcius, from) == 0) && (strcmp(farenheit, to) == 0))
    {
        printf("Answer is %lf Farenheint", val * (9.0 / 5) + 32);
    }
    else if ((strcmp(kelvin, from) == 0) && (strcmp(farenheit, to) == 0))
    {
        printf("f");
    }
    else if ((strcmp(farenheit, from) == 0) && (strcmp(celcius, to) == 0))
    {
        printf("c");
    }
    else if ((strcmp(farenheit, from) == 0) && (strcmp(kelvin, to) == 0))
    {
        printf("k");
    }
    else if ((strcmp(kelvin, from) == 0) && (strcmp(celcius, to) == 0))
    {
        printf("c");
    }
    else if ((strcmp(celcius, from) == 0) && (strcmp(kelvin, to) == 0))
    {
        printf("k");
    }
    else
    {
        printf("nah");
    }

    return 0;
}