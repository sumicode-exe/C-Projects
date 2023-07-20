#include <stdio.h>
#include <math.h>
#include <string.h>

int Distance();


int Distance()
{
    float millimeters, centimeters;
    float kilometers, meters;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "millieters") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "centimeters") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "kilometers") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "meters") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
        printf("Please enter a valid scale of Conversion \n");
        printf("Check the spelling and make sure to write in all small");
    }
}
