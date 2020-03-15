//4344

#include <stdio.h>

int main() {
	int C = 0;//number of test case

	scanf("%d", &C);

	for (int i = 0; i < C; i++) {
		int N = 0; //number of students
		int sum = 0; //sum of scores
		double average = 0.0; //average of score
		int cnt = 0; //number of students over average score

		int A[1000];

		scanf("%d", &N); //input number of students
		for (int j = 0; j < N; j++) {
			scanf("%d", &A[j]); //input scores
			sum += A[j]; //sum of scores
		}

		average = (double)sum / N;

		for (int j = 0; j < N; j++) {
			if (average < A[j]) cnt++; //counting the number of students over average score
		}

		double avg_per = ((double)cnt / N)*100;

		printf("%.3f%% \n", avg_per);
	}

	return 0;
}