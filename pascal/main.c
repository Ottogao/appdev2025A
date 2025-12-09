//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pascal.h"
#include "screen.h"

int main(void) {
	int row;
	printf("Pascal Triangle, the number of rows: ");
	scanf("%d", &row);
	setBGcolor(WHITE);
	clearScreen();
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		gotoXY(40+(row-i)*2, 10 + i);
		for (int j = 0; j <= i; j++) {
			setFGcolor(31 + rand()%7);
			printf("%4d", n_choose_k(i, j));
		}
		printf("\n");
	}
}
