#include <stdio.h>

int main() {
    int year, month;
    scanf("%d%d", &year, &month);

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("%d年的%d月有29天\n", year, month);
        } else {
            printf("%d年的%d月有28天\n", year, month);
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("%d年的%d月有30天\n", year, month);
    } else {
        printf("%d年的%d月有31天\n", year, month);
    }

    return 0;
}