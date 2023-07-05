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
    int unit;

    printf("This calculator converts units: \n");
    printf("of Temperature(t): \n Celcius(C)\n Farhenheit(F)\n Kelvin(k)\n");
    printf("of Distance(d): \n CentiMeter(cm)\n MilliMeter(mm)\n KiloMeter(km)\n");
    printf("of Volume(v): \n Litre(l)\n MilliLitre(ml)\n KiloLitre(kl)\n");
    printf("of Time(tm): \n MilliSeconds(ms)\n Seconds(sec)\n Minutes(min)\n Hours(hrs)\n");
    printf("of Weight(w): \n CentiGram(cg)\n MilliGram(mg)\n KiloGram(kg)\n");
    printf("of Power(p): \n Watt(wt)\n kiloWatt(kw)\n Joules(js)\n");

    printf("Enter what do you want to convert: \n");
    scanf("%c", &unit);

    if (unit == 't')
    {
        Temperature(C, F, K);
    }
    else if (unit == 'd')
    {
        Distance(cm, mm, km);
    }
    else if (unit == 'v')
    {
        Volume(l, ml, kl);
    }
    else if (unit == 'tm')
    {
        Time(ms, sec, hrs, min);
    }
    else if (unit == 'w')
    {
        Weight(cg, mg, kg);
    }
    else if (unit == 'p')
    {
        Power(wt, kw, js);
    }
}

int Temperature(int C, int F, int K)
{
}

int Distance(int cm, int mm, int km)
{
}

int Volume(int kl, int ml, int l)
{
}

int Time(int ms, int sec, int min, int hrs)
{
}

int Weight(int cg, int mg, int kg)
{
}

int Power(int wt, int kw, int js)
{
}