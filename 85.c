// 201814039 주동석
#include <stdio.h>

struct vector { float x, y; };

void vector_input(struct vector *p);
void vector_output(const struct vector *p);

int main(void) 
{
	struct vector v;
	vector_input(&v);
	vector_output(&v);
	return 0;
}

void vector_input(struct vector *p) 
{
	printf("벡터 입력: ");
	scanf("%f %f", &p->x, &p->y);
}

void vector_output(const struct vector *p) 
{
	printf("(%g, %g)", p->x, p->y);
}
