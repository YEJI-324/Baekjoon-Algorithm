#include <cstdio>

int main() {
	int a, b;
	printf("input two int : ");
	scanf_s("%d %d", &a, &b);
	
	if (a > b) printf(">");
	else if (a == b) printf("==");
	else printf("<");

	return 0;
}