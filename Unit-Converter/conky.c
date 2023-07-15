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
    printf("of Temperature - (T):\t Celcius(C)\t  Farhenheit(F)\t Kelvin(k)\n");
    printf("of Distance  -   (d):\t CentiMeter(cm)\t MilliMeter(mm)\t KiloMeter(km)\n");
    printf("of Volume    -   (v):\t Litre(l)\t MilliLitre(ml)\t KiloLitre(kl)\n");
    printf("of Time      -   (tm):\t MilliSeconds(ms)\t Seconds(sec)\t Minutes(min)\t Hours(hrs)\n");
    printf("of Weight    -   (w):\t CentiGram(cg)\t MilliGram(mg)\t KiloGram(kg)\n");
    printf("of Power     -   (p):\t Watt(wt)\t kiloWatt(kw)\t megaWatt(mw)\n");

    char temperature[] = {'t', 'e', 'm', 'p', 'e', 'r', 'a', 't', 'u', 'r', 'e', '\0'};
    char distance[] = {'d', 'i', 's', 't', 'a', 'n', 'c', 'e', '\0'};
    char volume[] = {'v', 'o', 'l', 'u', 'm', 'e', '\0'};
    char time[] = {'t', 'i', 'm', 'e', '\0'};
    char weight[] = {'w', 'e', 'i', 'g', 'h', 't', '\0'};
    char power[] = {'p', 'o', 'w', 'e', 'r', '\0'};
    char unit[30];

    printf("Wnter what do you want to convert from (no caps please): ");
    fgets(unit, 30, stdin);
    // printf("You want to convert:");
    // puts(unit);

    if ((strcmp(distance, unit) != 0) || (strcmp(volume, unit) != 0) || (strcmp(time, unit) != 0) || (strcmp(weight, unit) != 0) || (strcmp(power, unit) != 0))
    {
        printf("You want to convert a unit of Temperature!!");
    }
    else if ((strcmp(temperature, unit) != -1) || (strcmp(volume, unit) != -1) || (strcmp(time, unit) != -1) || (strcmp(weight, unit) != -1) || (strcmp(power, unit) != -1))
    {
        printf("You want to convert a unit of Distance!!");
    } else {
        printf("We are working!");
    }
}