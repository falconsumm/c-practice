#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check if the number is in the range 10 to 20 using logical operators
    if (number >= 10 && number <= 20) {
        printf("In Range\n");
    } else {
        printf("Out of Range\n");
    }

    return 0;
}
