#include <stdio.h>

#define TRUE 1;
#define FALSE 0;


int main() {
    int year = 1;
    while (year > 0) {
        scanf("%d", &year);
        is_leap_year(year);
    }
    return 0;
}