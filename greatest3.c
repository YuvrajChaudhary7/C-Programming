#include <stdio.h>

int main() {
    int a = 10, b = 9, c = 5;

    if(a >= b && a >= c) {
        printf("%d is the greatest.\n", a);
    }
    else if(b >= a && b >= c) {
        printf("%d is the greatest.\n", b);
    }
    else {
        printf("%d is the greatest.\n", c);
    }

    return 0;
}
