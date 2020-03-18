//백준 11399
//ATM
//그리디 알고리즘

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0; //사람 수
	int min_p=0;//result
	scanf("%d", &N);
	int *P = malloc(sizeof(int)*N); //필요한 시간
	for (int i = 0; i < N; i++) {
		scanf("%d", &P[i]); //input
	}

	int cnt = 1;
	int temp = 0;
	while (cnt != 0) {
		cnt = 0;
		for (int i = 0; i < N-1; i++) {
			if (P[i] > P[i + 1]) {
				temp = P[i];
				P[i] = P[i + 1];
				P[i + 1] = temp; //swap
				cnt++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		P[i + 1] += P[i];
	}

	for (int i = 0; i < N; i++) {
		min_p += P[i];
	}

	printf("%d\n", min_p);
	return 0;
}