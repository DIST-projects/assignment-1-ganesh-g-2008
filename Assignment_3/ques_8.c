#include <stdio.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct Time t1, t2, diff;

    printf("Enter first time (hour minute second): ");
    scanf("%d %d %d",
          &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time (hour minute second): ");
    scanf("%d %d %d",
          &t2.hour, &t2.minute, &t2.second);

    if(t2.second < t1.second)
    {
        t2.second += 60;
        t2.minute--;
    }

    if(t2.minute < t1.minute)
    {
        t2.minute += 60;
        t2.hour--;
    }

    diff.second = t2.second - t1.second;
    diff.minute = t2.minute - t1.minute;
    diff.hour = t2.hour - t1.hour;

    printf("Difference = %d:%d:%d",
           diff.hour, diff.minute, diff.second);

    return 0;
}
