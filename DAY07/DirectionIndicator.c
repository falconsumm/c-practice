#include <stdio.h>

int main() {
    char direction = 'W';

    switch (direction) {
        case 'N':
            printf("North");
            break;

        case 'S':
            printf("South");
            break;

        case 'E':
            printf("East");
            break;

        case 'W':
            printf("West");
            break;

        default:
            printf("Invalid direction");
    }

    return 0;
}
