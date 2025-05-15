#include <stdio.h>
int main()
{
    int a, b, c, d;
    int dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}
/*
Here we are going to explain how to manually calculate hours worked.  To do this, you will need a start and end time. The goal is to determine an entire duration worked using the recorded hours.  For example, starting @8:30 am and ending @3:45 pm would result in 7 hours and 15 minutes worked.

Here's how to determine hours worked:

Convert all times to 24 hour clock (military time):
Convert 8:45 am to 08:45 hours.
Convert 3:45 pm to 15:45 hours.
Next, Subtract the start time from the end time.
Now you have the actual hours worked for the day.
Finally to determined total time duration.
*/
