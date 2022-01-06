// Считать с клавиатуры 2 целых положительных числа, количество забитых голов хозяевами и
// гостями на футбольном матче. Вывести на экран результат матча «Home team wins», «Away team wins», «Draw».

// Пример ввода
// 7 0
// Пример вывода
// Home team wins

#include <stdio.h>

int main() {
    int homeScore, awayScore;
    
    scanf("%d %d", &homeScore, &awayScore);
    
    if ( homeScore > awayScore ) {
        printf("Home team wins\n");
    } else if ( homeScore < awayScore ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}
