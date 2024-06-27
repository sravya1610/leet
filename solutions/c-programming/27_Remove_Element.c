int removeElement(int* nums, int numsSize, int val) {
    // int last = numsSize-1;
    int count = 0;
    int i = 0;
    int k = 0;
    int last = numsSize;
    while (i < last) {
        if (nums[i] != val) {
            // printf("if  ---> %d---%d", nums[i], nums[i + 1]);
            nums[k] = nums[i];
            count++;
            k++;
        }
            i++;
            
    }
    printf("Count:%d---last:%d", count, last);
    return count;
}