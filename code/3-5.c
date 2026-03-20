#include <stdio.h>
#include <stdarg.h>

// TODO: my_sum 함수 작성
void my_sum(char type, int count, ...) {
    va_list ap;
    va_start(ap, count);
    switch(type) {
        case 'S':
        // 뭐함?
        for (int i = 0; i < count - 1; i++) {
            printf("%s ", va_arg(ap, char *));
        }
        printf("%s\n", va_arg(ap, char *));
        break;
        case 'C':
        // 뭐함?
        for (int i = 0; i < count; i++) {
            printf("%c", va_arg(ap, int));
        }
        printf("\n");
        break;
        case 'D':
        // 뭐함?
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += va_arg(ap, int);
        }
        printf("%d\n", sum);
        break;
    }
    va_end(ap);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
