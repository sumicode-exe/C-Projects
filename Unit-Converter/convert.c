#include <stdio.h>
#include <math.h>
#include <string.h>

double Temperature(double C, double F, double K);
double Distance(double cm, double mm, double km);
double Volume(double kl, double ml, double l);
double Time(double ms, double sec, double min, double hrs);
double Weight(double cg, double mg, double kg);
double Power(double wt, double kw, double js);

int main()
{
    // int t, d, v, s, w, p;
    double C, F, K;
    double cm, mm, km;
    double kl, ml, l;
    double ms, sec, min, hrs;
    double cg, mg, kg;
    double wt, kw, js;
    char unit;
    char from, to;

    printf("This calculator converts units: \n");
    printf("of Temperature(T): \n Celcius(C)\n Farhenheit(F)\n Kelvin(k)\n");
    printf("of Distance(d): \n CentiMeter(cm)\n MilliMeter(mm)\n KiloMeter(km)\n");
    printf("of Volume(v): \n Litre(l)\n MilliLitre(ml)\n KiloLitre(kl)\n");
    printf("of Time(tm): \n MilliSeconds(ms)\n Seconds(sec)\n Minutes(min)\n Hours(hrs)\n");
    printf("of Weight(w): \n CentiGram(cg)\n MilliGram(mg)\n KiloGram(kg)\n");
    printf("of Power(p): \n Watt(wt)\n kiloWatt(kw)\n Joules(js)\n");

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

double Temperature(double C, double F, double K)
{

    char from, to;
    double val;

    printf("Enter what you want to convert from: \n");
    scanf(" %c", &from);

    printf("Enter what you want to convert to: \n");
    scanf(" %c", &to);

    printf("Enter the numerical value of conversion");
    scanf("%d", &val);

    (from == 'C' && to == 'F') ? printf("Result is %d Farhenheit", (val * (9 / 5)) + 32) : printf("Plwase wait");
}

double Distance(double cm, double mm, double km) {}
double Volume(double kl, double ml, double l) {}
double Time(double ms, double sec, double min, double hrs) {}
double Weight(double cg, double mg, double kg) {}
double Power(double wt, double kw, double js) {}