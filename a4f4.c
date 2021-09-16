#include <stdio.h>
#include "simpio.h"
#include <math.h>
//**give the fund of the years **//
int sumFund(long fund,double rate,int years);

int main ()
{
    long fund;
    double rate;
    int years,sum ;
    sum=0;


    printf("Dose to kefalaio :");
    fund=GetLong();
    printf("Dose to epitokio :");
    rate=GetReal();
    printf("Dose ta eti :");
    years=GetInteger();
    sum=sumFund(fund,rate,years);
    printf("%d\n",sum);

    system("PAUSE");
    return 0;

}
int sumFund(long fund,double rate,int years)
{
    int i,sum;
    sum=0;
    for(i=0;i<years;i++)
    {
        sum+=ceil(fund*(1+rate));
    }
    return sum;
}
