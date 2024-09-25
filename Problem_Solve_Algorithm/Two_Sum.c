#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL; 
}

int main() {
   
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1;
    int* result1 = twoSum(nums1, 4, target1, &returnSize1);
    if (result1 != NULL) {
        printf("Example 1: [%d, %d]\n", result1[0], result1[1]);
        free(result1);
    } else {
        printf("Example 1: No solution found\n");
    }

   
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int returnSize2;
    int* result2 = twoSum(nums2, 3, target2, &returnSize2);
    if (result2 != NULL) {
        printf("Example 2: [%d, %d]\n", result2[0], result2[1]);
        free(result2);
    } else {
        printf("Example 2: No solution found\n");
    }


    int nums3[] = {3, 3};
    int target3 = 6;
    int returnSize3;
    int* result3 = twoSum(nums3, 2, target3, &returnSize3);
    if (result3 != NULL) {
        printf("Example 3: [%d, %d]\n", result3[0], result3[1]);
        free(result3);
    } else {
        printf("Example 3: No solution found\n");
    }

    return 0;
}
