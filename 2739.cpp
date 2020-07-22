#include <cstdio>

int main() {
	int num = 0;
	scanf_s("%d", &num);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num, i, num*i);
	}

	return 0;
}