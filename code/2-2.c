#include <stdio.h>

void swap(int *x, int *y) {
    int swapper1 = *x;
    int swapper2 = *y;
    *x = swapper2;
    *y = swapper1;
    // *x = *x ^ *y;
    // *y = *x ^ *y;
    // *x = *x ^ *y;
}

int main() {
    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);
    // TODO: swap 함수 호출
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
