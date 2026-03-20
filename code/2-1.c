#include <stdio.h>

void increment(int x) {
    ++x;
    printf("%d\n", x);
}

int main() {
    int x = 10;

    printf("%d\n", x);
    increment(x);
    printf("%d\n", x);

    return 0;
}

// x를 인수로 받는 increment의 증감연산자는, main frame의 int x의 값에는 영향을 주지 못한다.
