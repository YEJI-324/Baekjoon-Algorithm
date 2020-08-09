#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main() {
	int num = 0;
	char ox[81];
	
	int score = 0;
	int combo = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		score = 0;
		combo = 0;
		scanf("%s", &ox);
		for (int j = 0; j < strlen(ox); j++) {
			if (ox[j] == 'O') {
				combo++;
				score += combo;
			}
			else if (ox[j] == 'X') {
				combo = 0;
			}
		}
		printf("%d\n", score);
	}
	

	return 0;
}