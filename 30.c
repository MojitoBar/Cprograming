// 201814039	�ֵ���

#include <stdio.h>

void main()
{
	int answer = 59;
	int guess, tries = 0;

	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("������ ������ �����ϴ�.\n");
		else if (guess < answer)
			printf("������ ������ �����ϴ�.\n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ�� = %d\n", tries);
}