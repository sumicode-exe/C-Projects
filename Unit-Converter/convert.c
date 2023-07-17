#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature();

int main()
{
    printf("Enter what you want to convert:");

    char unit;
    scnaf("%s", unit);

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
    char scale;

    printf("Enter the calue you want to convert [in the form: {number <enter> scale}]");
    scanf("%lf %s", &value, scale);

    if((strcmp(scale, "Celcius") == 0)){
        printf("You want to convert %lf %s", value, scale);
    }
}