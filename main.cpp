/* C program to prints the next date*/
#include <stdio.h>
int day;
int m;
int year;
int nd =1;
int nm =1;
int nmm = 1;
int main(void)
{
    printf("Enter day, month, year:\t");
    scanf("%d /%d /%d",&day,&m,&year);
    if(day < 31 && (m == 1 || m==3 || m==5 || m==7 || m==8 || m==10 || m == 12))
    {
        printf("Next days date is:\t%d/%d/%d",day+1,m,year); // prints the date for the months having 31 days
        return 1;
    }
    if(day == 31 && (m ==12)) // prints the date of new year
     {
        printf("Happy New Year:\t \t%d/%d/%d",nd,nm,year+1);
        return 2;
     }
     if(day == 29 && m ==2 && year % 4 !=0 ) // Not a leap year 
    {
        printf("Not a leap year, enter valid date");// displays message if 29 date is entered
        return 3;
    }
    if(day == 28  && m == 2 && year % 4 ==0 ) // For leap year
    {
        printf("Next date is:\t\t%d/%d/%d",day+1,m,year);
        return 4;
    }
    if(day == 28  && m == 2 && year % 4 !=0) // prints the 1st of  march if not a leap year
    {
        printf("Next date is:\t\t %d/%d/%d", nmm,m+1,year);
        return 5;
    }
    if(day == 29 && m == 2 && year % 4 ==0)
    {
        printf("Next date is:\t\t%d/%d/%d", nmm,m+1,year);// prints 1st of march if it's a leap year
        return 6;
    }
    if(day == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) // prints the date for months having 30 days
    {
        printf("Next date is:\t\t%d/%d/%d",nmm, m+1,year);
        return 7;
    }
    if(day > 30 && (m == 4 || m == 6 || m == 9 || m == 11))
    {
        printf("This month has only 30 days");// to check whether the month have 30 or 31 days
        return 8;
    }
    if(day < 30 && (m == 4 || m == 6 || m == 9 || m == 11)) // prints the date for 30 days month
    {
        printf("Next date is:\t\t%d/%d/%d",day+1,m,year);
        return 9;
    }
    if(day >31 || m > 12)
    {
        printf("Invalid date");// to check whether the date is valid or not
        return 10;
    }
        
}
         

