#include"stdio.h"
#include"P461_HammingDistance.c"
int main() {
	int x,y;
	scanf("%d %d",&x,&y);
	printf("the hamming distance is %d\n", hammingDistance(x,y));
	return 0;
}