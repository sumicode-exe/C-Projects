#include <stdio.h>
#include <math.h>
#include <string.h>

int Time();

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

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
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

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
        printf("%6f seconds \n", seconds);
        printf("%6f hours \n", hours);
        printf("%6f days \n", days);
        printf("%6f weeks \n", weeks);
        printf("%6f months \n", months);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "hours") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f days \n", days);
        printf("%6f weeks \n", weeks);
        printf("%6f months \n", months);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "days") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f hours \n", hours);
        printf("%6f weeks \n", weeks);
        printf("%6f months \n", months);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "weeks") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f hours \n", hours);
        printf("%6f days \n", days);
        printf("%6f months \n", months);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "months") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f hours \n", hours);
        printf("%6f days \n", days);
        printf("%6f weeks \n", weeks);
        printf("%6f years \n", years);
    }
    else if ((strcmp(scale, "years") == 0))
    {
        // printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f milliseconds \n", milliseconds);
        printf("%6f seconds \n", seconds);
        printf("%6f minutes \n", minutes);
        printf("%6f hours \n", hours);
        printf("%6f days \n", days);
        printf("%6f weeks \n", weeks);
        printf("%6f months \n", months);
    }
    else
    {
        printf("Please enter a valid scale of Conversion \n");
        printf("Check the spelling and make sure to write in all small");
    }
}