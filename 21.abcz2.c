// Считать с клавиатуры целое число.
// - Если число четное, вывести alpha
// - Если число кратно трем, вывести bravo
// - Если число кратно пяти, вывести charlie
// - Если число не кратно ни одному из них, вывести zulu

// Пример ввода
// 8
// Пример вывода
// alpha

#include <stdio.h>

int main() {
    int number;
    int isZulu = 1;
    
    scanf("%d", &number);
    
    if ( number % 2 == 0 ) {
        printf("alpha\n");
        isZulu = 0;
    }
    if ( number % 3 == 0 ) {
        printf("bravo\n");
        isZulu = 0;
    }
    if ( number % 5 == 0 ) {
        printf("charlie\n");
        isZulu = 0;
    }
    if ( isZulu ) {
        printf("zulu\n");
    }
    
    return 0;
}
