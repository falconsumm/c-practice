#include <stdio.h>

int main() {
    char grade = 'B';
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            printf("Pass");
            break;
        case 'D':
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
    }
    return 0;
}
