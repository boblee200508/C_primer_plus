#include <stdio.h>
void br(void);
void ic(void);
int main(void) {
    printf("Brizil, Russia, India, China\n");
    ic();
    br();

    return 0;
}
void ic(void) {
    printf("India, China\n");
}
void br(void) {
    printf("Brizil, Russia\n");
}
