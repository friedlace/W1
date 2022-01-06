// Вычислить и вывести факториал считанного с клавиатуры целого числа. Гарантируется,
// что вводимое число не превышает 10.

// В случае неопределенности ответа вывести -1.
// Для решения пользоваться циклами.

// Пример ввода
// 5
// Пример вывода
// 120

#include <stdio.h>

int main() {
    int factorial;
    int result;
    
    scanf("%d", &factorial);
    
    if ( factorial < 0 ) {
        printf("%d\n", -1);
        return 0;
    } else {
        for ( result = 1; factorial > 1; factorial-- ) {
            result *= factorial;
        }
        printf("%d\n", result);
    }
    
    return 0;
}
