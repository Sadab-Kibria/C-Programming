#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,day,month;
    int byear,bday,bmonth;
    printf("~Your Birth Date~\n");
    printf("Day:");
    scanf("%d",&bday);
    printf("Month:");
    scanf("%d",&bmonth);
    printf("Year:");
    scanf("%d",&byear);

    printf("~Current Date~\n");
    printf("Day:");
    scanf("%d",&day);
    printf("Month:");
    scanf("%d",&month);
    printf("Year:");
    scanf("%d",&year);

    if(bday>day)
    {
        day=day+30;
        month=month-1;
    }
    if(bmonth>month)
    {
        year=year-1;
        month=month+12;
    }
    if(byear>year)
    {
        printf("Invalid input!");
    }

    printf("You are %d years %d months and %d days old",year-byear,month-bmonth,day-bday);

    return 0;
}
