int findDuplicate(int* nums, int numsSize) {
    int max=INT_MIN;
    for(int i=0;i<numsSize;i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
        }
    }
    int freq[max+1];
    for(int i=0;i<=max;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<numsSize;i++)
    {
        freq[nums[i]]++;
    }
    for(int i=0;i<numsSize;i++)
    {
        if(freq[nums[i]]>1)
        {
            return nums[i];
        }
    }
    return 0;
    
}