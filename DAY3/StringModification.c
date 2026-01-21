#include <stdio.h>

int main() {

    char word[] = "apple";   // string stored as characters
    word[2] = 'o';           // change 3rd character (p → o)
    printf("%s", word);      // print modified string

    return 0;
}
