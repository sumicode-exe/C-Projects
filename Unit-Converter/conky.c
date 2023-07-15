#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature();
int Distance();
int Volume();
int Time();
int Weight();
int Power();

int main(){
    
    printf("This calculator converts units: \n");
    printf("of Temperature - (T):\t Celcius(C)\t  Farhenheit(F)\t Kelvin(k)\n");
    printf("of Distance  -   (d):\t CentiMeter(cm)\t MilliMeter(mm)\t KiloMeter(km)\n");
    printf("of Volume    -   (v):\t Litre(l)\t MilliLitre(ml)\t KiloLitre(kl)\n");
    printf("of Time      -   (tm):\t MilliSeconds(ms)\t Seconds(sec)\t Minutes(min)\t Hours(hrs)\n");
    printf("of Weight    -   (w):\t CentiGram(cg)\t MilliGram(mg)\t KiloGram(kg)\n");
    printf("of Power     -   (p):\t Watt(wt)\t kiloWatt(kw)\t megaWatt(mw)\n");
}