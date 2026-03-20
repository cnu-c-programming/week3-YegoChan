#include <stdio.h>

int global_var = 0;

void test_scope() {
    static int static_var = 0;
    int local_var = 0;

    global_var++;
    static_var++;
    local_var++;
    printf("global_var: %d\n", global_var);
    printf("static_var: %d\n", static_var);
    printf("local_var: %d\n", local_var);
}

int main() {
    test_scope();
    printf("\n");
    test_scope();
    printf("\n");
    test_scope();

    return 0;
}

// 시작은 다 0인데, global과 static은 값이 유지되지만 local은 매 번 초기화당함
