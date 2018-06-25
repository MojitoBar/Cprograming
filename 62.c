// 201814039 �ֵ���


#include <stdio.h>

int binary_search(int list[], int n, int key);

int main(void) {
	int grade[] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	int key, size = sizeof grade / sizeof grade[0];

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &key);
	printf("Ž�� ��� = %d\n", binary_search(grade, size, key));

	return 0;
}


int binary_search(int list[], int n, int key) {
	int low = 0, high = n - 1, middle;
	while (low <= high) {
		printf("[%d %d]\n", low, high);	// �׽�Ʈ������ ���� ���
		middle = (low + high) / 2;		// �߰� ��ġ ���
		if (key == list[middle])		// Ž�� ����
			return middle;
		else if (key > list[middle])	// �߰� ���Һ��� ũ��
			low = middle + 1;		// ���ο� ������ low ����
		else				// �߰� ���Һ��� ������
			high = middle - 1;		// ���ο� ������ high ����	
	}
	return -1;	// Ž�� ����
}
