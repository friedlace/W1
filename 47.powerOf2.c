// Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени числа 2
// от нулевой до заданной. Использовать цикл.

// Пример ввода
// 3
// Пример вывода
// 1 2 4 8

#include <stdio.h>

#define MULTIPLY 2

int main() {
    int last;
    int result = 1;
    
    scanf("%d", &last);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", result);
        result *= MULTIPLY;
    }
    printf("%d\n", result);
    
    return 0;
}
