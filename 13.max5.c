// Считать с клавиатуры пять целых чисел и вывести большее из них.
// В случае равенства выводить любое.
// Данная задача решается без массивов, циклов и функций.

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int max;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    max = a;
    if ( b > max ) {
        max = b;
    }
    if ( c > max ) {
        max = c;
    }
    if ( d > max ) {
        max = d;
    }
    if ( e > max ) {
        max = e;
    }
    
    printf("%d\n", max);
    
    return 0;
}
