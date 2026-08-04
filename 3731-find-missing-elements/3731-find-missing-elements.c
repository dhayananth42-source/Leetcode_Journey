/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int *arr=(int*)malloc(101*sizeof(int));
    int k=0,max=0,min=101;
    for(int i=0;i<numsSize;i++)
    {
        if(min>nums[i])
        {
            min=nums[i];
        }
        if(max<nums[i])
        {
            max=nums[i];
        }
    }
    int found=0;
    for(int i=min+1;i<max;i++)
    {
        found=0;
         for(int j=0;j<numsSize;j++)
         {
            if(i==nums[j])
            {
                found=1;
                break;
            }
         }
         if(found!=1)
         {
            arr[k++]=i;
         }
    }
    *returnSize=k;
    return arr;
     
    
}