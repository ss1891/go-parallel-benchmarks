#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int range = 5;
#define ROWS 5
#define COLS 5 

int main(int argc, char *argv[]) {
	srand(time(NULL));
	const int N = atoi(argv[1]);
	int i, c, d, k, sum = 0;
	int first[ROWS][COLS], second[ROWS][COLS], result[ROWS][COLS];

	for (i = 0; i <= N; i++) {
		for (c = 0; c < ROWS; c++) 
			for (d = 0; d < COLS; d++)
				first[c][d] = rand() % range;

		for (c = 0; c < ROWS; c++)
			for (d = 0; d < COLS; d++)
				second[c][d] = rand() % range;

		// Multiply
		for (c = 0; c < ROWS; c++) {
			for (d = 0; d < COLS; d++) {
				for (k = 0; k < ROWS; k++) {
					sum = sum + first[c][k] * second[k][d];
				}

				result[c][d] = sum;
				sum = 0;
			}
		}
	}
	return 0;
}