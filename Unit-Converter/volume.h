#include <stdio.h>
#include <math.h>
#include <string.h>

int Volume();

int Volume()
{
    float millilitres, centilitres;
    float kilolitres, litres;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "millilitres") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "centilitres") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "kilolitres") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "litres") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
        printf("Please enter a valid scale of Conversion \n");
        printf("Check the spelling and make sure to write in all small");
    }
}