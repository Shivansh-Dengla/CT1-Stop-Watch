#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> //for linux user use this
#define CYCLE 60

int main()
{
    int hr, min, sec;
    int h = 0, m = 0, s = 0;
    printf("Enter hours: \n");
    scanf("%d", &hr);
    printf("Enter minutes: \n");
    scanf("%d", &min);
    printf("Enter seconds: \n");
    scanf("%d", &sec);

    while(1)
    {
        printf("\n\n---------------DIGITAL STOP WATCH------------------\n\n");
        printf(" %.2d:%.2d:%.2d\n \n", h, m, s);
        printf("***************************************************");

        if(h == hr && m == min && s == sec)
        {
            break;
        }
        else
        {
            // system("clear");
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if(m == CYCLE)
        {
            h++;
            m = 0;
        }

    }
    return 0;
}