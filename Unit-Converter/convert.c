#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature();
int Distance();
int Volume();
int Time();
int Weight();
int Power();

int main()
{
    printf("This calculator converts units: \n");
    printf("of Temperature -    Celcius(C)      \t Farhenheit(F) \t Kelvin(k)  \t Rankine \t Delisle \t Romer \t Rankine \t Newton");
    printf("of Distance    -    CentiMeter(cm)  \t MilliMeter(mm)\t KiloMeter(km)\n");
    printf("of Volume      -    Litre(l)        \t MilliLitre(ml)\t KiloLitre(kl)\n");
    printf("of Time        -    MilliSeconds(ms)\t Seconds(sec)  \t Minutes(min)\t Hours(hrs)\n");
    printf("of Weight      -    CentiGram(cg)   \t MilliGram(mg) \t KiloGram(kg)\n");
    // printf("of Power     -   (p):\t Watt(wt)\t kiloWatt(kw)\t megaWatt(mw)\n");

    char unit[10];
    printf("Enter what do you want to convert: \n");
    scanf("%s", unit);

    if ((strcmp(unit, "temperature") == 0))
    {
        Temperature();
    }
    else if ((strcmp(unit, "distance") == 0))
    {
        Distance();
    }
}

int Temperature()
{
    double val;
    char from[10];
    char to[10];

    printf("Enter the numerical calue of conversion ");
    scanf("%lf", &val);

    printf("Enter what to convert from: ");
    scanf("%s", from);

    printf("Enter what to convert to: ");
    scanf("%s", to);

    if ((strcmp(from, "celcius") == 0) && (strcmp(to, "farenheit") == 0))
    {
        printf("Answer is %lf Farhenheit", val * (9.0 / 5) + 32);
    }
    else if ((strcmp(from, "farenheit") == 0) && (strcmp(to, "celcius") == 0))
    {
        printf("Answer is %lf Celcius", (val - 32) * (5.0 / 9));
    }
    else if ((strcmp(from, "celcius") == 0) && (strcmp(to, "kelvin") == 0))
    {
        printf("Answer if %lf Kelvins", val + 273.15);
    }
    else if ((strcmp(from, "kelvin") == 0) && (strcmp(to, "celcius") == 0))
    {
        printf("Answer is %lf Celcius", val - 273.15);
    }
    else if ((strcmp(from, "farenheit") == 0) && (strcmp(to, "kelvin") == 0))
    {
        printf("Anser is %lf Kelvin", (val - 32) * (5.0 / 9) + 273.15);
    }
    else if ((strcmp(from, "kelvin") == 0) && (strcmp(to, "farenheit") == 0))
    {
        printf("Answer is %lf Farhenheit", (val - 273.15) * (9.0 / 5) + 32);
    }
    else
    {
        printf("Please enter valid conversion units. \n");
        printf("PLEASE CHECK SPELLINGS AS WELL");
    }
}



int Distance()
{
    double val;
    char from[10];
    char to[10];

    printf("Enter the numerical calue of conversion ");
    scanf("%lf", &val);

    printf("Enter what to convert from: ");
    scanf("%s", from);

    printf("Enter what to convert to: ");
    scanf("%s", to);

    if ((strcmp(from, "centimeters") == 0) && (strcmp(to, "millimeters") == 0))
    {
        printf("Answer is %lf MilliMeters", val / 10);
    }
    else if ((strcmp(from, "meters") == 0) && (strcmp(to, "centimeters") == 0))
    {
        printf("Answer is %lf CentiMeters", val * 10);
    }
    else if ((strcmp(from, "centimeter") == 0) && (strcmp(to, "kilometer") == 0))
    {
        printf("Answer if %lf KiloMeters", val * 100000);
    }
    else if ((strcmp(from, "kilometers") == 0) && (strcmp(to, "centimeters") == 0))
    {
        printf("Answer is %lf CentiMeters", val / 100000);
    }
    else if ((strcmp(from, "meters") == 0) && (strcmp(to, "kilometers") == 0))
    {
        printf("Anser is %lf KiloMeters", val * 1000000);
    }
    else if ((strcmp(from, "kilometers") == 0) && (strcmp(to, "meters") == 0))
    {
       printf("Answer is %lf  MilliMeters", val / 1000000);
    }
    else
    {
        printf("Please enter valid conversion units. \n");
        printf("PLEASE CHECK SPELLINGS AS WELL");
    }
}
