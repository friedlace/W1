// Считать с клавиатуры целые числа min и max. Вывести в строку квадраты всех четных
// чисел в промежутке от min до max включительно. В указанном промежутке гарантированно
// существует как минимум 1 парное число.

// Пример ввода
// 0 7
// Пример вывода
// 0 4 16 36

#include <stdio.h>

int main() {
    int min, max;
    int multiple;
    
    scanf("%d %d", &min, &max);
    
    multiple = min - min % 2;
    if ( multiple < min ) {
        multiple += 2;
    }
    for ( ; multiple < max - 1; multiple += 2 ) {
        printf("%d ", multiple*multiple);
    }
    printf("%d\n", multiple*multiple);
    
    return 0;
}
