#include <stdio.h>

// TODO: Declaration을 통해 컴파일 에러 해결하기
void print();
int square(int n);

int main() {
    print();

    int num = 5;
    int result = square(num);
    printf("%d %d\n", num, result);

    return 0;
}

void print() {
    printf("Welcome to Computer Programming 03 Lab!\n");
}

int square(int n) {
    return n * n;
}
