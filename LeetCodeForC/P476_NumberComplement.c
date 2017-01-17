/**
 *Given a positive integer, output its complement number. 
 The complement strategy is to flip the bits of its binary representation.
Note:
The given integer is guaranteed to fit within the range of a 32-bit signed integer.
You could assume no leading zero bit in the integer¡¯s binary representation.
Example 1:
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), 
and its complement is 010. So you need to output 2.
Example 2:
Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), 
and its complement is 0. So you need to output 0.
*/

#include"math.h"
#include"stdio.h"
int findComplement(int num) {
	int i=0;
	char b[32] = {0};
	for(;i<32;i++) {
		if(num > 0 && num % 2 == 0) {
			b[i] = 1;
			num /= 2;
		} else if(num > 0 && num % 2 == 1) {
			b[i] = 0;
			num /= 2;
		} else {
			b[i] = 0;
		}
	}
	num = 0;
	for(i = 0; i < 32; i++) {
		num = num + b[i]*(int)pow(2.0,i);
	}
	return num;
}

//int main() {
//	int num = 5;
//	printf("%d\n",findComplement(num));
//	return 0;
//}