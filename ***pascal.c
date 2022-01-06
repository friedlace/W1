// Получить число lines, распечатать первые lines строк треугольника Паскаля. Числа выводить с начала
// строки через пробел.

// Если очертить треугольник Паскаля, то получится равнобедренный треугольник. В этом треугольнике на
// вершине и по бокам стоят единицы. Каждое число равно сумме двух, расположенных над ним чисел.
// Продолжать треугольник можно бесконечно. Строки треугольника симметричны относительно
// вертикальной оси. Имеет применение в теории вероятности и обладает занимательными свойствами.
// © Wikipedia

// Для решения этой задачи достаточно материала 1-го уикенда.

// Пример ввода
// 6
// Пример вывода
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1

#include <stdio.h>

int pascal(int x, int y) {
    if ( y == 1 || y == x ) {
        return 1;
    }
    
    return pascal(x-1, y-1) + pascal(x-1, y);
}

int main() {
    int lines;
    
    scanf("%d", &lines);
    
    for ( int row = 1; row <= lines; row++ ) {
        for ( int col = 1; col < row; col++ ) {
            printf("%d ", pascal(row, col));
        }
        printf("%d\n", pascal(row, row));
    }
    
    return 0;
}
