#include <stdio.h>
#include <stdarg.h>

//TODO: count개의 정수를 받아 평균을 반환하는 함수 작성
int average(int count, ...) {
    va_list ap;
    va_start(ap, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return sum / count;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));

    return 0;
}
