#include <stdio.h>
int main(int argc, char *argv[]) {
    int i = 3;
    puts("Hello, world!");
    puts("This is a new line.");
    do {
        puts("%d");
        i--;
    } while (i != 0);
    return 0;
}
