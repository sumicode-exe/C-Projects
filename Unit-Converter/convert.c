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
        
        Temperature(C, F, K);
    }
    else if (unit == 'D')
    {
        Distance(cm, mm, km);
    }
    else if (unit == 'V')
    {
        Volume(l, ml, kl);
    }
    else if (unit == 't')
    {
        // Time(ms, sec, hrs, min);
    }
    else if (unit == 'W')
    {
        // Weight(cg, mg, kg);
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

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion: \n");
    scanf("%lf", &val);

    printf("Enter 'l' for litres");
    printf("Enter 'm for mililitres");
    printf("Enter 'k for kilolitres");

    (from == 'c' && to == 'm') ? printf("Answer is %lf MilliMeters", val / 10 ) : 
    (from == 'm' && to == 'c') ? printf("Answer is %lf CentiMeters", val * 10) :
    (from == 'c' && to == 'k') ? printf("Answer if %lf KiloMeters", val * 100000) : 
    (from == 'k' && to == 'c') ? printf("Answer is %lf CentiMeters", val / 100000) : 
    (from == 'm' && to == 'k') ? printf("Anser is %lf KiloMeters", val  * 1000000) : 
    (from == 'k' && to == 'm') ? printf("Answer is %lf  MilliMeters", val / 1000000) : 
    printf("Please enter valid conversion units");
}
int Time() {}
int Weight() {}
//int Power() {}