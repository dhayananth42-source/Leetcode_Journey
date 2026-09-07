int sumOfUnique(int* nums, int numsSize) {
    int sum=0,max=0;
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
    for(int i=1;i<=max;i++)
    {
        if(freq[i]==1)
        {
            sum+=i;
        }
    }
    return sum;
}