// Считать целое число. Вывести на экран минимальное нечетное число, не меньшее введенного.

// Пример ввода
// 16
// Пример вывода
// 17

#include <stdio.h>

int main() {
    int odd;
    
    scanf("%d", &odd);
    
    if ( odd % 2 == 0 ) {
        odd += 1;
    }
    printf("%d\n", odd);
    
    return 0;
}