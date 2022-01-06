// Написать функцию:
// int isPrime(int n)
// Проверить, является ли данное число простым.

int isPrime(int n) {
    if ( n == 2 ) {
        return 1;
    }
    if ( n <= 1 || n % 2 == 0 ) {
        return 0;
    }
    
    for ( int i = 3; i < n; i += 2 ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}
