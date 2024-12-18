#include <stdio.h>


typedef struct {
    int x;
} S;

typedef union {
    int a;
    int b;
} U;


void f(S *s) {
    printf("s: %d\n", s.x);
}


int main(void) {

    S s = { 45 };
    S *s_ptr = &s;
    printf("s.x: %d\n", s.x);
    printf("s_ptr.x: %d\n", s_ptr.x);
    f(&s);
    // s->x;

    U u = { .a = 123 };
    U *u_ptr = &u;
    printf("u.a: %d\n", u.a);
    printf("u_ptr.a: %d\n", u_ptr.a);
    // u->a;


    return 0;
}
