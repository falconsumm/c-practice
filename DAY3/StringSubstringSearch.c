#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "Hello, World!";       
    // Main string in which we will search

    char substring[] = "World";          
    // The word we want to find inside 'text'

    char *result = strstr(text, substring);
    // strstr() searches for 'substring' inside 'text'
    // If found, it returns a pointer to the first match ("World!")
    // If not found, it returns NULL

    printf("%s", result);                
    // Prints from where "World" starts till the end of 'text'
    // Output: World!

    return 0;
}
