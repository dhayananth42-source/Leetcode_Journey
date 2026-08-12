/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* nums, int numsSize, int* returnSize) {
    int *ans=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        ans[i]=nums[i];
    }
    int temp;
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-i-1;j++)
        {
            if(ans[j]>ans[j+1])
            {
                temp=ans[j];
                ans[j]=ans[j+1];
                ans[j+1]=temp;
            }
        }
    }
    for(int i=0;i<numsSize;i+=2)
    {
        temp=ans[i];
        ans[i]=ans[i+1];
        ans[i+1]=temp;
    }
    *returnSize=numsSize;
    return ans;
}