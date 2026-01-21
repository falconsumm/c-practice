#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "This is a sentence";
    char *token = strtok(sentence, " ");
    
    printf("%s\n", token);
    return 0;
}
