#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature();
int Distance();
int Weight();
int Volume();
int Time();

int main()
{
    printf("This programme convert temperature, distance, weight, volume, time and power \n");
    printf("Enter what you want to convert: \n [PLEASE ENTER WITHOUT CAPS]: \n");

    char unit[10];
    scanf("%s", unit);

    if ((strcmp(unit, "temperature") == 0))
    {
        Temperature();
    }
}

int Temperature()
{
    float Celcius, Kelvin, Farenheit, Delisle;
    float Newton, Rankine, Reamur, Romer;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "celcius") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "farenheit") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "kelvin") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "delisle") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "newton") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "rankine") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "reamur") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "romer") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
    }
}

int Distance()
{
    float millimeter, centimeter;
    float kilometer, meter;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "millieter") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "centimeter") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "kilometer") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "meter") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
    }
}

int Weight()
{
    float millilitre, centilitre;
    float kilolitre, litre;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "millilitre") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "centilitre") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "kilolitre") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "litre") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
    }
}
