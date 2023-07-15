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
    double val;
    char strFrom[10];
    char strTo[10];

    printf("Enter from:");
    scanf("%s", strFrom);
    printf("Enter to:");
    scanf("%s", strTo);

    if ((strcmp(strFrom, "celcius") == 0 && strcmp(strTo, "kelvin") == 0))
    {
        printf("Answer if in kelvin");
        printf("%lf", val + 273.15);
    }
    else if ((strcmp(strFrom, "farenheit") == 0) && (strcmp(strTo, "celcius")) == 0)
    {
        printf("answer is in celcius");
        printf("somethng ometif");
    }

    return 0;
}