/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                int *res_array=malloc(2*sizeof(int));
                res_array[0]=i;
                res_array[1]=j;
                return res_array;
                }
        }
    }
    *returnSize=0;
    return NULL;
}