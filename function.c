#include <stdio.h>

// Structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

// Function to increment a date by one day
void incrementDate(struct Date *date) {
    const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check if it's a leap year and adjust February's days accordingly
    if (isLeapYear(date->year)) {
        daysInMonth[2] = 29;
    }

    date->day++;

    // Check if the day exceeds the maximum days in the current month
    if (date->day > daysInMonth[date->month]) {
        date->day = 1;
        date->month++;

        // Check if the month exceeds December, adjust the year accordingly
        if (date->month > 12) {
            date->month = 1;
            date->year++;
        }
    }
}

int main() {
    // Example usage of the incrementDate function
    struct Date apex = {19, 7, 2023};

    printf("Original date: %d/%d/%d\n", apex.day, apex.month, apex.year);
    incrementDate(&apex);
    printf("Date incremented by 1 day: %d/%d/%d\n", apex.day, apex.month, apex.year);

    return 0;
}

