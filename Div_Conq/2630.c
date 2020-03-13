#include <stdio.h>

int m[129][129];
int w_cnt = 0;
int b_cnt = 0;

void div_conq(int x, int y, int N);

int main() {
	int N = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0 ; j < N; j++) {
			scanf("%d", &m[i][j]); //input matrix
		}
	}

	div_conq(0, 0, N);

	printf("%d\n", w_cnt);
	printf("%d\n", b_cnt);

	return 0;
}

void div_conq(int x, int y, int N) {
	int temp_cnt = 0;

	for (int i = x; i < x+N; i++) {
		for (int j = y; j < y+N; j++) {
			if (m[i][j] == 1) temp_cnt++; //count blue
		}
	}

	//temp_cnt==0 -> w_cnt++
	//temp_cnt==N^2 -> b_cnt++
	//else recursion

	if (temp_cnt == 0) w_cnt++;
	else if (temp_cnt == N * N) b_cnt++;
	else {
		div_conq(x, y, N / 2);
		div_conq(x, y + (N / 2), N / 2);
		div_conq(x + (N / 2), y, N / 2);
		div_conq(x + (N / 2), y + (N / 2), N / 2);
	}
}