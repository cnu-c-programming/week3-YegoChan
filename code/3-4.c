#include <stdio.h>
#include <stdarg.h>

//TODO: count개의 정수를 받아 최댓값을 반환하는 함수 작성
int max_of(int count, ...) {
    va_list ap;
    va_start(ap, count);
    int max = 0;
    int p = 0;
    for (int i = 0; i < count; i++) {
        p = va_arg(ap, int);
        if (max < p) {
            max = p; 
        }
    }
    va_end(ap);
    return max;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));

    return 0;
}
