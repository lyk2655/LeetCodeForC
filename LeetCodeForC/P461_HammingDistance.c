//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

//Given two integers x and y, calculate the Hamming distance.
#include "stdio.h"
#include "string.h"
int hammingDistance(int x, int y) {
	if(x == y) {
		return 0;
	}
	int d = 0;
	for(int i = 0; i < 32; i++) {
		//十进制转化为二进制，除二取余数就是二级制对应的每一位
		if(x%2 != y%2) {
			d++;
		}
		x /= 2;
		y /= 2;
	}
	return d;
}	

int main() {
	int x,y;
	printf("the hamming distance is %d", hammingDistance(x,y));
	return 0;
}