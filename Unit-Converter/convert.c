#include <stdio.h>
#include <math.h>
#include <string.h>

#include "temperature.h"
#include "distance.h"
#include "time.h"
#include "volume.h"
#include "weight.h"

int Temperature();
int Distance();
int Volume();
int Weight();
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
    else
    {
        printf("Please enter a valid scale of Conversion \n");
        printf("Check the spelling and make sure to write in all small");
    }
}




