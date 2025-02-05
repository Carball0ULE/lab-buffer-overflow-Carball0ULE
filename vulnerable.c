#include <stdio.h>
#include <string.h>
#include <unistd.h>

void special_trick(void) {
   __asm__("jmp *%esp");
}

void vulnerable(char *arg) {
    char buffer[64];
    strcpy (buffer, arg);
    printf ("Input: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    vulnerable(argv[1]);
    return 0;
}
