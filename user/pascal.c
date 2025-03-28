/*Получить число lines, распечатать первые lines строк треугольника Паскаля. Числа выводить с начала строки через пробел.
Если очертить треугольник Паскаля, то получится равнобедренный треугольник. 
В этом треугольнике на вершине и по бокам стоят единицы. 
Каждое число равно сумме двух, расположенных над ним чисел.
Продолжать треугольник можно бесконечно. 
Строки треугольника симметричны относительно вертикальной оси. 
Имеет применение в теории вероятности и обладает занимательными свойствами.
Пример ввода
6
Пример вывода
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/

#include <stdio.h>

int binomial(int row, int col) {
	int koef = 1;
	int i;

	if ( row - col > col ) {
		col = row - col;
	}
	for ( i = col + 1; i <= row; ++i ) {
		koef = koef * i;
	}
	for ( i = 1; i < (row - col + 1); ++i  ) {
		koef = koef / i;
	}

	return koef;
}

int main() {
	int total;
	int col;

	scanf ("%d", &total);
	for ( int row = 0; row < total; row++ ) {
		for ( col = 0; col < row; col++ ) {
			printf ("%d ", binomial(row, col));
		}
		printf("%d\n", binomial(row, col));
	}

	return 0;
}
