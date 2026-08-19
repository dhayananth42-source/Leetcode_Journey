int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int temp=0;
    for(int i=0;i<nums1Size-1;i++)
    {
        for(int j=0;j<nums1Size-i-1;j++)
        {
            if(nums1[j]>nums1[j+1])
            {
                temp=nums1[j];
                nums1[j]=nums1[j+1];
                nums1[j+1]=temp;
            }
            if(nums2[j]>nums2[j+1])
            {
                temp=nums2[j];
                nums2[j]=nums2[j+1];
                nums2[j+1]=temp;
            }
        }
    }
    return nums2[0]-nums1[0];
    
}