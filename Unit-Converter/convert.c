#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature();
int Distance();
int Volume();
int Time();
int Weight();
//int Power();

int main()
{
    // double t, d, v, s, w, p;
    double C, F, K;
    double cm, mm, km;
    double kl, ml, l;
    double wks, sec, min, hrs, dys;
    double cg, mg, kg;
   // double wt, kw, mw;
    char unit;
    double val;
    char from, to;

    printf("This calculator converts units: \n");
    printf("of Temperature - (T):\t Celcius(C)\t  Farhenheit(F)\t Kelvin(k)\n");
    printf("of Distance  -   (d):\t CentiMeter(cm)\t MilliMeter(mm)\t KiloMeter(km)\n");
    printf("of Volume    -   (v):\t Litre(l)\t MilliLitre(ml)\t KiloLitre(kl)\n");
    printf("of Time      -   (tm):\t MilliSeconds(ms)\t Seconds(sec)\t Minutes(min)\t Hours(hrs)\n");
    printf("of Weight    -   (w):\t CentiGram(cg)\t MilliGram(mg)\t KiloGram(kg)\n");
   // printf("of Power     -   (p):\t Watt(wt)\t kiloWatt(kw)\t megaWatt(mw)\n");

    printf("Enter what do you want to convert: \n");
    scanf("%c", &unit);

    if (unit == 'T')
    {
        
        Temperature();
    }
    else if (unit == 'D')
    {
        Distance();
    }
    else if (unit == 'V')
    {
        Volume();
    }
    else if (unit == 't')
    {
        Time();
    }
    else if (unit == 'W')
    {
        Weight();
    }

    /*
    else if (unit == 'p')
    {
        // Power(wt, kw, js);
    }   */
}

int Temperature()
{
  
    char from, to;
    double val;

    printf("Enter 'C' for Celcius");
    printf("Enter 'F for Farhenheit");
    printf("Enter 'K' for Kelvin");

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion: \n");
    scanf("%lf", &val);

    (from == 'C' && to == 'F') ? printf("Answer is %lf Farhenheit", val * (9.0 / 5) + 32) : 
    (from == 'F' && to == 'C') ? printf("Answer is %lf Celcius", (val - 32) * (5.0 / 9)) :
    (from == 'C' && to == 'K') ? printf("Answer if %lf Kelvins", val + 273.15) : 
    (from == 'K' && to == 'C') ? printf("Answer is %lf Celcius", val-273.15) : 
    (from == 'F' && to == 'K') ? printf("Anser is %lf Kelvin", (val-32)*(5.0/9)+273.15) : 
    (from == 'K' && to == 'F') ? printf("Answer is %lf Farhenheit", (val-273.15)*(9.0/5)+32) : 
    printf("Please enter valid conversion units");

    
}

int Distance() {
    
    char from, to;
    double val;

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion: \n");
    scanf("%lf", &val);

    printf("Enter 'c' for centimeters");
    printf("Enter 'm for milimeters");
    printf("Enter 'k for kilometers");

    (from == 'c' && to == 'm') ? printf("Answer is %lf MilliMeters", val / 10 ) : 
    (from == 'm' && to == 'c') ? printf("Answer is %lf CentiMeters", val * 10) :
    (from == 'c' && to == 'k') ? printf("Answer if %lf KiloMeters", val * 100000) : 
    (from == 'k' && to == 'c') ? printf("Answer is %lf CentiMeters", val / 100000) : 
    (from == 'm' && to == 'k') ? printf("Anser is %lf KiloMeters", val  * 1000000) : 
    (from == 'k' && to == 'm') ? printf("Answer is %lf  MilliMeters", val / 1000000) : 
    printf("Please enter valid conversion units");

}

int Volume() {

    char from, to;
    double val;

    printf("Enter 'l' for litres");
    printf("Enter 'm for mililitres");
    printf("Enter 'k for kilolitres");

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion: \n");
    scanf("%lf", &val);

    (from == 'l' && to == 'k') ? printf("Answer is %lf kilolitre", val / 1000) : 
    (from == 'k' && to == 'l') ? printf("Answer is %lf litre", val * 1000) :
    (from == 'l' && to == 'm') ? printf("Answer if %lf milielitre", val * 10000) : 
    (from == 'm' && to == 'l') ? printf("Answer is %lf litre", val / 10000) : 
    (from == 'k' && to == 'm') ? printf("Anser is %lf milielitre", val  * 1000000) : 
    (from == 'm' && to == 'k') ? printf("Answer is %lf  kilolitre", val / 1000000) : 
    printf("Please enter valid conversion units");
}

int Time() {

    char from, to;
    double val;

    printf("Enter 'w' for weeks \n");
    printf("Enter 'd' for days \n");
    printf("Enter 'h' for hours \n");
    printf("Enter 'm' for minutes \n");
    printf("Enter 's' for seconds \n");

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion: \n");
    scanf("%lf", &val);

    (from == 'w' && to == 'd') ? printf("Answer is %lf days", val * 7) : 
    (from == 'w' && to == 'h') ? printf("Answer is %lf hours", val * 7 * 24) :
    (from == 'w' && to == 'm') ? printf("Answer is %lf minutes", val * 7 * 24 * 60) :
    (from == 'w' && to == 's') ? printf("Answer if %lf seconds", val * 7 * 24 * 60 * 60) : 
    (from == 'd' && to == 'w') ? printf("Answer is %lf weeks", val / 7) : 
    (from == 'd' && to == 'h') ? printf("Anser is %lf hours", val * 24) : 
    (from == 'd' && to == 'm') ? printf("Answer is %lf  minutes", val * 24 * 60) : 
    (from == 'd' && to == 's') ? printf("Answer is %lf seconnds", val * 24 * 60 * 60) : 
    (from == 'h' && to == 'w') ? printf("Answer is %lf weeks", val / (24 * 7)) :
    (from == 'h' && to == 'd') ? printf("Answer if %lf days", val / 24) : 
    (from == 'h' && to == 'm') ? printf("Answer is %lf minutes", val * 60) : 
    (from == 'h' && to == 's') ? printf("Anser is %lf seconds", val * 60 * 60) : 
    (from == 'm' && to == 'w') ? printf("Answer is %lf  weeks", val / (60 * 24 * 7)) : 
    (from == 'm' && to == 'd') ? printf("Answer is %lf days", val / (60 * 24)) : 
    (from == 'm' && to == 'h') ? printf("Answer is %lf hours", val / 60) :
    (from == 'm' && to == 's') ? printf("Answer if %lf seconds", val * 60 ) : 
    (from == 's' && to == 'w') ? printf("Answer is %lf weeks", val * (60 * 60 * 24 * 7)) : 
    (from == 's' && to == 'd') ? printf("Anser is %lf days", val / (60 * 24 * 7) ): 
    (from == 's' && to == 'h') ? printf("Answer is %lf  hours", val / (24 * 60)) : 
    (from == 's' && to == 'm') ? printf("Answer is %lf minutes", val / 60) :
    printf("Please enter valid conversion units");
}

int Weight() {}
//int Power() {}