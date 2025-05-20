#include <stdio.h>

int main() {
    int minutes;
    printf("Please enter the number of minutes: ");
    scanf("%d", &minutes);

    double minutesInYear = 60.0 * 24.0 * 365.0;
    double minutesInDay = 60.0 * 24.0;
    double years = minutes / minutesInYear;
    double days = minutes / minutesInDay;

    printf("\n%d minutes is equivalent to %f years and %f days\n", minutes, years, days);

    return 0;
}
