#include <stdio.h>

int m[65][65];

void quad_tree(int x, int y, int N);

int main() {
	int N = 0;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf_s("%1d", &m[i][j]); //input matrix
				/*
					scanf 쓸 때 %d말고 %1d로 하면 입력을 하나씩만 받음
				*/
		}
	}

	quad_tree(0, 0, N);

	return 0;
}

void quad_tree(int x, int y, int N) {
	int temp_cnt = 0;

	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (m[i][j] == 1) temp_cnt++; //count balck
		}
	}

	//temp_cnt==0 -> white print 0
	//temp_cnt==N^2 -> black print 1
	//else recursion
	
	if (temp_cnt == 0) printf("0");
	else if (temp_cnt == N * N) printf("1");
	else {
		printf("(");
		quad_tree(x, y, N / 2);
		quad_tree(x, y + (N / 2), N / 2);
		quad_tree(x + (N / 2), y, N / 2);
		quad_tree(x + (N / 2), y + (N / 2), N / 2);
		printf(")");
	}
}