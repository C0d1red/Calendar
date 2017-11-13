#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d, m, y, stol, year_stol, day_final;
    double day;
    printf("Print your date: (05 11 2014) \n");
    scanf("%d %d %d", &d, &m, &y);

    if(d>0 && d<32 && m>0 && m<13 && y>999 && y<10000){

        if(m == 1 || m == 2){
            switch(m){
            case 1:
                m = 11;
                y--;
                break;
            case 2:
                m = 12;
                y--;
                break;
            }
        } else
            m = m-2;

        year_stol = y%100;
        stol = y/100;
        day = (d + floor((13.0*m-1)/5.0) + floor(5.0*year_stol/4.0) + floor((-7.0*stol)/4.0));
        day_final = abs(day)%7;
        switch (day_final){
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
        }
    } else
        printf("Error, one or more of date is wrong!\n");
    return 0;
}
