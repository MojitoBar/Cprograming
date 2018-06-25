// 201814039 주동석
#include <stdio.h>

struct vector { float x, y; };

struct vector *vector_input(struct vector *p);
void vector_output(const struct vector *p);

int main(void) {
	struct vector v;
	vector_output(vector_input(&v));
	return 0;
}

struct vector *vector_input(struct vector *p) 
{
	printf("벡터 입력: ");
	scanf("%f %f", &p->x, &p->y);
	return p;
}

void vector_output(const struct vector *p) 
{
	printf("(%g, %g)", p->x, p->y);
}
