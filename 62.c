// 201814039 주동석


#include <stdio.h>

int binary_search(int list[], int n, int key);

int main(void) {
	int grade[] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	int key, size = sizeof grade / sizeof grade[0];

	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);
	printf("탐색 결과 = %d\n", binary_search(grade, size, key));

	return 0;
}


int binary_search(int list[], int n, int key) {
	int low = 0, high = n - 1, middle;
	while (low <= high) {
		printf("[%d %d]\n", low, high);	// 테스트용으로 구간 출력
		middle = (low + high) / 2;		// 중간 위치 계산
		if (key == list[middle])		// 탐색 성공
			return middle;
		else if (key > list[middle])	// 중간 원소보다 크면
			low = middle + 1;		// 새로운 값으로 low 설정
		else				// 중간 원소보다 작으면
			high = middle - 1;		// 새로운 값으로 high 설정	
	}
	return -1;	// 탐색 실패
}
