//백준 1780
//쿼드트리생각함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int m[2187][2187];
int cnt1 = 0; //-1
int cnt2 = 0; //0
int cnt3 = 0; //1

void div_conq(int x, int y, int N);

int main() {
	int num = 0;
	scanf("%d", &num);  //input size

	for (int i = 0; i < num; i++) {  //input matrix
		for(int j = 0; j < num; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	div_conq(0, 0, num);
	printf("%d\n%d\n%d\n", cnt1, cnt2, cnt3);
	return 0;
}

void div_conq(int x, int y, int N) {
	int temp_cnt = 0;
	int temp = m[x][y];

	if (N == 1) { //기저
		if (temp == -1) cnt1++;
		else if (temp == 0) cnt2++;
		else if (temp == 1) cnt3++;
	}
	else {
		for (int i = x; i < x + N; i++) {
			for (int j = y; j < y + N; j++) {
				if (m[i][j] == temp) temp_cnt++;
			}
		}

		if (temp_cnt == N * N) { // 다 같을 때 
			if (temp == -1) cnt1++;
			else if (temp == 0) cnt2++;
			else if (temp == 1) cnt3++;
		}
		else {  // divide to 9
			div_conq(x, y, N / 3);
			div_conq(x, y + N / 3, N / 3);
			div_conq(x, y + 2 * N / 3, N / 3);
			div_conq(x + N / 3, y, N / 3);
			div_conq(x + N / 3, y + N / 3, N / 3);
			div_conq(x + N / 3, y + 2 * N / 3, N / 3);
			div_conq(x + 2 * N / 3, y, N / 3);
			div_conq(x + 2 * N / 3, y + N / 3, N / 3);
			div_conq(x + 2 * N / 3, y + 2 * N / 3, N / 3);
		}
	}
}
