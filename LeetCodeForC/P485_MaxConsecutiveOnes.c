#include"stdio.h"

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0, temp = 0, i=0;
	for( i = 0; i < numsSize; i++) {
		if(nums[i] == 1) {
			temp++;
		} else {
			if(max < temp) {
				max  = temp;
			}
			temp = 0;
		}
	}
	if(max < temp) {
		max  = temp;
	}
	return max;
}

//int main() {
//	int a[6] = {1,1,0,1,1,1};
//	printf("%d\n",findMaxConsecutiveOnes(a,6));
//	return 0;
//}