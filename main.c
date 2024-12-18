#include <stdio.h>


typedef struct {
    int x;
} S;


int main(void) {

    S s = { .x = 45 };
    S *s_ptr = &s;
    int x = s_ptr.x;

    printf("x: %d\n", x);

}
