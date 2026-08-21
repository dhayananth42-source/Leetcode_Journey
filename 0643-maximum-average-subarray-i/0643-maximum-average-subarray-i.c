double findMaxAverage(int* nums, int numsSize, int k) {
     int c_sum=0,max_sum=0;
     for(int i=0;i<k;i++)
     {
        c_sum+=nums[i];
     }
     max_sum=c_sum;
     for(int i=k;i<numsSize;i++)
     {
        c_sum-=nums[i-k];
        c_sum+=nums[i];
        if(c_sum>max_sum)
        {
            max_sum=c_sum;
        }
     }
     return (double)max_sum/k;
    
}