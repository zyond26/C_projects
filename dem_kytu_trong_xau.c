#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    int  countLetters = 0;
    int  countDigits = 0;
    int  countOthers = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            countLetters++;
        } else if (isdigit(s[i])) {
            countDigits++;
        } else if (s[i] != '\n' ) {
            countOthers++;
        }
    }
    printf("%d %d %d\n", countLetters, countDigits, countOthers);
    return 0;
}
