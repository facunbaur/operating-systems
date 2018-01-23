#include <stdio.h>
#include <math.h>

int main() {
	int input[] = {1,2,3,4,5,6,7,8,9,10};
	double sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += sqrt(input[i]);
	}
	sum /= 10;
	printf("%lf", sum);
	return 0;
}
