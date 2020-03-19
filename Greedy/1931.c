//백준 1931
//회의 수 N, 회의 시작, 끝나는 시간 -> 최대 사용할 수 있는 회의 수
//끝나는 시간순

#define _SCR_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	int **P = malloc(sizeof(int *)*N);
	for (int i = 0; i < N; i++) {
		P[i] = malloc(sizeof(int) * 2);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &P[i][j]);
		}
	}



	for (int i = 0; i < N; i++) {
		free(P[i]);
	}
	free(P);

	return 0;
}