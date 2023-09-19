#include <stdio.h>

int zellers_congruence(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    return h;
}

int main() {
    int day, month, year;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    int weekday = zellers_congruence(day, month, year);

    switch (weekday) {
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        default:
            printf("Invalid date\n");
            break;
    }

    return 0;
}




