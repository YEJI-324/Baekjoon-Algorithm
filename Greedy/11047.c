//백준 11047
//N종류의 동전 -> 최소 동전개수로 가치 합 K 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0; //동전 종류
	int K = 0; //가치 합
	int result = 0; //result
	int A[11];

	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++) { //input value
		scanf("%d", &A[i]);
	}

	for (int i = N - 1; i >= 0; i--) {
		result += K / A[i];
		K %= A[i];
	} //어차피 거꾸로 내려오니까 if(A[i]<K)할 필요 없음
	printf("%d\n", result);

	return 0;
}