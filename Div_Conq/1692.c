//백준 분할정복 1629
//고속지수연산법 생각함.
//첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int a, b, c;

long long int mod(long long int a, long long int b) {
	if (b == 0) return 1;
	else if (b == 1) return a;

	long long int half = mod(a, b / 2);
	half %= c;

	if (b % 2 == 1) return (half*half) % c *a;  //odd
	else return (half * half)%c;  //even
}

int main() {
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld \n", mod(a, b)%c);
	return 0;
}