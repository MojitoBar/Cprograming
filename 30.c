// 201814039	주동석

#include <stdio.h>

void main()
{
	int answer = 59;
	int guess, tries = 0;

	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("제시한 정수가 높습니다.\n");
		else if (guess < answer)
			printf("제시한 정수가 낮습니다.\n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수 = %d\n", tries);
}