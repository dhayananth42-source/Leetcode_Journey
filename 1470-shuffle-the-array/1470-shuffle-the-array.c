

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ans=(int*)malloc(numsSize*sizeof(int));
    int k=n;
    int j=0,i=0;
    while(j!=numsSize)
    {
        if(j%2==0)
        {
            ans[j++]=nums[i];
            i++;
        }
        else
        {
            ans[j++]=nums[k];
            k++;
        }
    }
    *returnSize=k;
    return ans;

}