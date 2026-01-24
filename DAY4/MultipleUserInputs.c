#include <stdio.h>

int main() {
    int a, b;
    char c;
    printf("Enter two integers and a character separated by spaces: ");
    scanf("%d %d %c", &a, &b, &c);
    printf("Values: %d, %d, %c", a, b, c);
    return 0;
}
