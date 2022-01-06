// Считать с клавиатуры числовую последовательность - 5 целых чисел.
// Проверить, упорядочена ли последовательность по неубыванию.
// Если упорядочена вывести на экран «yes», в протиивном случае вывести «no».
// Задача решается без использования циклов.

// Пример ввода
// -20 -15 0 12 15
// Пример вывода
// yes

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if ( a < b && b < c && c < d && d < e ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
