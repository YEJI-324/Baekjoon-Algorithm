#include <cstdio>

int main() {
	int num[8];

	for (int i = 0; i < 8; i++) {
		scanf_s("%d", &num[i]);
	}

	int cnt = 0;
	for (int i = 0; i < 7; i++) {
		if (num[i]-1 == num[i + 1]) cnt--;
		else if (num[i]+1 == num[i + 1]) cnt++;
	}

	switch (cnt)
	{
	case -7: printf("descending\n");
		break;
	case 7: printf("ascending\n");
		break;
	default:
		printf("mixed\n");
		break;
	}

	return 0;
}