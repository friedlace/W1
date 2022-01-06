// Считать с клавиатуры целое положительное число, вывести на экран количество всех делителей
// этого числа.
// Пример ввода
// 12
// Пример вывода
// 6

#include <stdio.h>

int main() {
    int num;
    int divisor = 1;
    
    scanf("%d", &num);
    
    for ( int i = 1; i < num; i++ ) {
        if ( num % i == 0 ) {
            divisor += 1;
        }
    }
    printf("%d\n", divisor);
    
    return 0;
}
