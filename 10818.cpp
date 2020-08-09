//10818
//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int N, num;
	int min = 1000000;
	int max = -1000000;

	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
		if (num > max) max = num;
	}

	printf("%d %d\n", min, max);
	
	return 0;
}