#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int A[6][6];
long long int ans[6][6];

int main() {
	int N = 0; //size of matrix
	int B = 0; //^B

	scanf("%d %d", &N, &B);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int num = 0; num < B; num++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < N; k++) {
					ans[i][j] += A[i][k] * A[k][j];
				}
			}
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}

	return 0;
}