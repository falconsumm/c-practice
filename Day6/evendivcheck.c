#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check if the number is even and divisible by 5 using logical operators
    if (number % 2 == 0 && number % 5 == 0) {
        printf("Even and Divisible by 5\n");
    } else {
        printf("Not Even or Not Divisible by 5\n");
    }

    return 0;
}
