#include <stdio.h>
int main() {
    int year;
    long int completed_years, leap_years, total_extra_days;
    int day_name;
    printf("Enter the year:\n");
    scanf("%d", &year);
    completed_years = year - 1;
    leap_years = (completed_years / 4) - (completed_years / 100) + (completed_years / 400);
    total_extra_days = completed_years + leap_years;
    day_name = total_extra_days % 7;
    printf("\nThe day on 01/01/%d is: ", year);

    switch (day_name) {
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        case 6:
            printf("Sunday");
            break;
        default:
            printf("Error");
            break;
    }
return 0;
}