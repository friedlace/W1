// Считать с клавиатуры целое положительное число. Если число является целой степенью двойки,
// вывести "yes", иначе вывести "no".

// Пример ввода
// 8
// Пример вывода
// yes

#include <stdio.h>

int main() {
    int power;
    
    scanf("%d", &power);
    
    if ( 1073741824 % power == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}


#include <stdio.h>

int main() {
    int power;
    
    scanf("%d", &power);
    
    if ( !(power & (power - 1)) ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
