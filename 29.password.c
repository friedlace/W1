// Считывать с клавиатуры пароль. Если пароль совпадает с 1488, вывести на экран "accepted", 
// иначе вывести на экран "incorrect password". После пяти неудачных попыток вывести на экран "denied".

// Пример ввода
// 1488
// Пример вывода
// accepted

#include <stdio.h>

int main() {
    int password;
    
    for ( int i = 1; i <= 5; i++ ) {
        scanf("%d", &password);
        
        if ( password == 1488 ) {
            printf("accepted\n");
            return 0;
        }
        printf("incorrect password\n");
    }
    printf("denied\n");
    
    return 0;
}
