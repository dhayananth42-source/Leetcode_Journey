int differenceOfSum(int* nums, int numsSize) {
    int esum=0,dsum=0,digit;
    for(int i=0;i<numsSize;i++)
    {
        esum+=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        digit=nums[i];
        while(digit!=0)
        {
            dsum+=digit%10;
            digit/=10;
        }
    }
    return abs(esum-dsum);
    
}