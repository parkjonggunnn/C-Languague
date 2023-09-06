#include<stdio.h>
void main()
{
	int iarr[100][100] = { 0 };   // Z = 90

	int num, i, j, k;
	int key = 65;

	printf("ют╥б : ");
	scanf_s("%d", &num);
	printf("\n");

	for (i = num - 1; i >= 0; i--) {
		for (j = num - 1; j >= 0; j--) {
			if (key == 91) {key = 65;}

			iarr[j][i] = key;
			key += 1;
			
		}
	}
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			printf("%c ", iarr[i][j]);
		}
		printf("\n");
	}



}