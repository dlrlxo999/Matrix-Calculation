#include <stdio.h>

void ptrprodMat(int matrix[3][3]);
void indexAddMat(int matrix[3][3]);

int main(void)
{
	int matrix[3][3];
	printf("Enter Matrix : ");
	int line, row;
	for (line = 0;line < 3;line++) {
		for (row = 0;row < 3;row++) {
			scanf_s("%d", &matrix[line][row]);
		}
	}
	for (line = 0;line < 3;line++) {
		for (row = 0;row < 3;row++) {
			printf("%5d", matrix[line][row]);
		}
		printf("\n\n");
	}
	printf("\n");
	printf("1) Multiply (Matrix * Matrix)\n");
	ptrprodMat(matrix);


	printf("2) Sum (Matrix + Matrix)\n");
	indexAddMat(matrix);
	printf("\n");
	system("pause");
	return 0;
}

void ptrprodMat(int matrix[3][3])
{
	int mul_matrix[3][3] = { 0 };
	int line, row, p;
	for (line = 0;line < 3;line++) {
		for (row = 0;row < 3;row++) {
			for (p = 0;p < 3;p++) {
				mul_matrix[line][row] += (matrix[line][p] * matrix[p][row]);
			}
		}
	}
	for (line = 0;line < 3;line++) {
		for (row = 0;row < 3;row++) {
			printf("%5d", mul_matrix[line][row]);
		}
		printf("\n\n");
	}
	return 0;
}

void indexAddMat(int matrix[3][3])
{
	int sum_matrix[3][3] = { 0 };
	int line, row;
	for (line = 0;line < 3;line++) {
		for (row = 0;row < 3;row++) {
			sum_matrix[line][row] = (matrix[line][row] + matrix[line][row]);
		}
	}
	for (line = 0;line < 3;line++) {
		for (row = 0;row < 3;row++) {
			printf("%5d", sum_matrix[line][row]);
		}
		printf("\n\n");
	}
	return 0;
}