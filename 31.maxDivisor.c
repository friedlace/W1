// Считать с клавиатуры целое положительное число. Вывести на экран наибольший его
// нетривиальный делитель. В случае неопределенности вывести 0.

// Пример ввода
// 12
// Пример вывода
// 6

#include <stdio.h>

int main() {
    int dividend;
    
    scanf("%d", &dividend);
    
    for ( int i = dividend - 1; i > 1; i-- ) {
        if ( dividend % i == 0 ) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", 0);
    
    return 0;
}
