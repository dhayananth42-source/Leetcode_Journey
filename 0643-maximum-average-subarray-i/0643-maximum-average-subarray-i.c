double findMaxAverage(int* nums, int numsSize, int k) {
      int left=0,right=k,sum=0,max=INT_MIN;
      for(int i=0;i<k;i++)
      {
        sum+=nums[i];
      }
      max=sum;
      while(right<numsSize)
      {
             sum-=nums[left];
             sum+=nums[right];
             if(sum>max)
             {
                max=sum;
             }
             
             left++;
             right++;
      }
      double avg=(double)max/k;
      return  avg;
    
}