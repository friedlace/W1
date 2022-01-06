// Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
// Вывести на экран наибольшее число, кратное делителю, не превышающее делимое.

// Пример ввода
// 15 6
// Пример вывода
// 12

#include <stdio.h>

int main() {
    int dividend, divisor, result;
    
    scanf("%d %d", &dividend, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    result = dividend % divisor;
    if ( result < 0 ) {
        dividend -= divisor;
    }
    printf("%d\n", dividend-result);
    
    return 0;
}
