#include <stdio.h>
#include <math.h>
#include <string.h>

int Temperature(int C, int F, int K);
int Distance(int cm, int mm, int km);
int Volume(int kl, int ml, int l);
int Time(int ms, int sec, int min, int hrs);
int Weight(int cg, int mg, int kg);
int Power(int wt, int kw, int js);

int main()
{
    // int t, d, v, s, w, p;
    int C, F, K;
    int cm, mm, km;
    int kl, ml, l;
    int ms, sec, min, hrs;
    int cg, mg, kg;
    int wt, kw, js;
    char unit;
    char from, to;

    printf("This calculator converts units: \n");
    printf("of Temperature - (T):\t Celcius(C)\t  Farhenheit(F)\t Kelvin(k)\n");
    printf("of Distance  -   (d):\t CentiMeter(cm)\t MilliMeter(mm)\t KiloMeter(km)\n");
    printf("of Volume    -   (v):\t Litre(l)\t MilliLitre(ml)\t KiloLitre(kl)\n");
    printf("of Time      -   (tm):\t MilliSeconds(ms)\t Seconds(sec)\t Minutes(min)\t Hours(hrs)\n");
    printf("of Weight    -   (w):\t CentiGram(cg)\t MilliGram(mg)\t KiloGram(kg)\n");
    printf("of Power     -   (p):\t Watt(wt)\t kiloWatt(kw)\t Joules(js)\n");

    printf("Enter what do you want to convert: \n");
    scanf("%c", &unit);

    if (unit == 'T')
    {
        Temperature(C, F, K);
    }
    else if (unit == 'd')
    {
        //   Distance(cm, mm, km);
    }
    else if (unit == 'v')
    {
        // Volume(l, ml, kl);
    }
    else if (unit == 't')
    {
        // Time(ms, sec, hrs, min);
    }
    else if (unit == 'w')
    {
        // Weight(cg, mg, kg);
    }
    else if (unit == 'p')
    {
        // Power(wt, kw, js);
    }
}

int Temperature(int C, int F, int K)
{

    char from, to;
    double val;
    double result;

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion: \n");
    scanf("%lf", &val);

    (from == 'C' && to == 'F') ? printf("Answer is %lf Farhenheit", val * (9.0 / 5) + 32) : (from == 'F' && to == 'C') ? printf("Answer is %lf Celcius", (val - 32) * (5.0 / 9))
                                                                                                                       : printf("hellp");
}

int Distance(int cm, int mm, int km) {}
int Volume(int kl, int ml, int l) {}
int Time(int ms, int sec, int min, int hrs) {}
int Weight(int cg, int mg, int kg) {}
int Power(int wt, int kw, int js) {}