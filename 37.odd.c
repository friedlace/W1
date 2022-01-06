// Считать с клавиатуры целое положительное число.
// Вывести в строку все нечётные числа от нуля до указанного числа включительно.

// Пример ввода
// 9
// Пример вывода
// 1 3 5 7 9

#include <stdio.h>

int main() {
    int last;
    
    scanf("%d", &last);
    
    if ( last % 2 == 0 ) {
        last -= 1;
    }
    
    for ( int i = 1; i < last; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", last);
    
    return 0;
}
