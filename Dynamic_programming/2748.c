//백준 2748
//피보나치수열2 N번째 피보나치 수 출력
//variable 크기 long long

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int fibo[91];
	int N = 0;
	scanf("%d", &N);
	
	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i <= N; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	printf("%lld\n", fibo[N]);

	return 0;
}