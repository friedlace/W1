// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
// Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.

// Пример ввода
// 5
// 1 2 3 4 5
// Пример вывода
// 5

#include <stdio.h>

int main() {
    int size, max, number;
    
    scanf("%d %d", &size, &max);
    
    for ( ; size > 1; size-- ) {
        scanf("%d", &number);
        
        if ( number > max ) {
            max = number;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
