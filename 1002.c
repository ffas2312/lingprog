#include <stdio.h>
int main(void){
	double a, area, Raio;
	scanf("%d", &a);
	Raio = a*a;
	area = 3.14159*Raio;
	printf("A=%d", area);

	return 0;
}