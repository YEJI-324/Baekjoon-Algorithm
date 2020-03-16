//백준 2740
//행렬의 곱
//A[N][M] x B[M][K] = C[N][K]

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100][100];
int B[100][100];
int C[100][100];

int main() {
	int N = 0;
	int M = 0;
	int K = 0;
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	} // input A

	scanf("%d %d", &M, &K);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			scanf("%d", &B[i][j]);
		}
	} // input B


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			C[i][j] = 0;
		}
	} // initialize C to 0

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	} // A * B

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
