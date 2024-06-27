int removeDuplicates(int* nums, int numsSize) {
    int c = 0;
    if(nums==NULL) return c;
    for(int i=0;i<numsSize;i++){
        if(nums[c]!=nums[i]){
            nums[++c]=nums[i];
        }
    }
    return c+1;
}
