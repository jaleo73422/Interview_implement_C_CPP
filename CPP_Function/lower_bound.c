#include <stdio.h>

int upper_bound(int* nums, int n, int target) {
    int l = 0;
    int r = n - 1;
    int mid;

    while(l <= r) {
        mid = (l + r) / 2;

        if (nums[mid] == target) {
            break;
        }

        if (nums[mid] < target) {
            l =  mid + 1;
        }

        if (nums[mid] > target) {
            r = mid - 1;
        }
    }

    while(nums[mid] >= target) {
        mid--;
    }

    return mid + 1;
}

int main() {
    int nums[] = {4, 6, 6, 6, 6, 10, 12, 18, 20};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("%d \n", upper_bound(nums, n, 2));
    printf("%d \n", upper_bound(nums, n, 6));
    printf("%d \n", upper_bound(nums, n, 20));

    return 0;
}