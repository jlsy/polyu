

#include <stdio.h>

char c;

int main() {
    do {
        // Read a character from stdin
        c = fgetc(stdin);
        // End of file? Nothing left to read...
        if (feof(stdin)) {
            // Exit loop
            break;
        }

        // Is the character lower case?
        if (c >= 'm') {
            // Yes, let's make it upper case
            c-=13;
        }
        if(c<'m'){
          c+=13;
        }
        // Print the character to stdout (default)
        printf("%c", c);
    } while (1);
    // Exit cleanly
    return 0;

}
