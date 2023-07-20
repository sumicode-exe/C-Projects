#include <stdio.h>
#include <string.h>

int addizione(int a, int b);


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
        printf("You want to convert %lf %s \n", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f Kelvin \n", Kelvin);
        printf("%6f Farenheit \n", Farenheit);
        printf("%6f Delisle \n", Delisle);
        printf("%6f Newton \n", Newton);
        printf("%6f Rankine \n", Rankine);
        printf("%6f Reamur \n", Reamur);
        printf("%6f Romer \n", Romer);
    }
    else if ((strcmp(scale, "farenheit") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Kelvin);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Delisle);
        printf("%6f days \n", Newton);
        printf("%6f weeks \n", Rankine);
        printf("%6f months \n", Reamur);
        printf("%6f years \n", Romer);
    }
    else if ((strcmp(scale, "kelvin") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Farenheit);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Delisle);
        printf("%6f days \n", Newton);
        printf("%6f weeks \n", Rankine);
        printf("%6f months \n", Reamur);
        printf("%6f years \n", Romer);
    }
    else if ((strcmp(scale, "delisle") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Kelvin);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Farenheit);
        printf("%6f days \n", Newton);
        printf("%6f weeks \n", Rankine);
        printf("%6f months \n", Reamur);
        printf("%6f years \n", Romer);
    }
    else if ((strcmp(scale, "newton") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Kelvin);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Delisle);
        printf("%6f days \n", Farenheit);
        printf("%6f weeks \n", Rankine);
        printf("%6f months \n", Reamur);
        printf("%6f years \n", Romer);
    }
    else if ((strcmp(scale, "rankine") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Kelvin);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Delisle);
        printf("%6f days \n", Newton);
        printf("%6f weeks \n", Farenheit);
        printf("%6f months \n", Reamur);
        printf("%6f years \n", Romer);
    }
    else if ((strcmp(scale, "reamur") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Kelvin);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Delisle);
        printf("%6f days \n", Newton);
        printf("%6f weeks \n", Rankine);
        printf("%6f months \n", Farenheit);
        printf("%6f years \n", Romer);
    }
    else if ((strcmp(scale, "romer") == 0))
    {
        printf("You want to convert %lf %s", value, scale);

        // seconds = value / 10;
        // minutes = value / (60 * 60);
        // hours = value / (60 * 60 * 60);
        // days = value / (60 * 60 * 60 * 24);
        // weeks = value / (60 * 60 * 60 * 24 * 7);
        // months = value / (60 * 60 * 60 * 24 * 7 * 4.2);
        // years = value / (60 * 60 * 60 * 24 * 7 * 4.2 * 12);

        printf("%6f seconds \n", Kelvin);
        printf("%6f minutes \n", Celcius);
        printf("%6f hours \n", Delisle);
        printf("%6f days \n", Newton);
        printf("%6f weeks \n", Rankine);
        printf("%6f months \n", Reamur);
        printf("%6f years \n", Farenheit);
    }
    else
    {
        printf("Please enter a valid scale of Conversion \n");
        printf("Check the spelling and make sure to write in all small");
    }
}


