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
    else if ((strcmp(unit, "distance") == 0))
    {
        Distance();
    }
    else if ((strcmp(unit, "weight") == 0))
    {
        Weight();
    }
    else if ((strcmp(unit, "volume") == 0))
    {
        Volume();
    }
    else if ((strcmp(unit, "time") == 0))
    {
        Time();
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
    }
}

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
    }
}

int Weight()
{
    float milligrams, centigrams;
    float kilograms, grams;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "milligrams") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "centigrams") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "kilograms") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "grams") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
    }
}

int Time()
{
    float milliseconds, seconds, minutes, hours;
    float days, weeks, months, years;

    double value;
    char scale[20];

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}] \n");
    printf("[PLEASE W/O CAPS:] \n");
    scanf("%lf %s", &value, scale);

    if ((strcmp(scale, "milliseconds") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        seconds = value / 10;
        minutes = value / (60 * 60);
        hours = value / (60 * 60 * 60);
        days = value / (60 * 60 * 60 * 24);
        weeks = value / (60 * 60 * 60 * 24 * 7);
        months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f hours \n", hours);
        printf("%6f days \n", days);
        printf("%6f weeks \n", weeks);
        printf("%6f months \n", months);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "seconds") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
        
        seconds = value / 10;
        minutes = value / (60 * 60);
        hours = value / (60 * 60 * 60);
        days = value / (60 * 60 * 60 * 24);
        weeks = value / (60 * 60 * 60 * 24 * 7);
        months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f hours \n", hours);
        printf("%6f days \n", days);
        printf("%6f weeks \n", weeks);
        printf("%6f months \n", months);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "minutes") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "hours") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "days") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "weeks") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "months") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else if ((strcmp(scale, "years") == 0))
    {
        printf("You want to convert %lf %s", value, scale);
    }
    else
    {
    }
}