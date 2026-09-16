  int mostFrequentEven(int* nums, int numsSize) {
    int max = 0;
    for(int i =0; i<numsSize; i++ ){
        if(nums[i]>max)
            max=nums[i];
    }
    int freq[max+1];
    for(int i = 0; i<=max; i++){
        freq[i]=0;
    }
    for(int i =0; i<numsSize; i++){
        if(nums[i]%2==0){
            freq[nums[i]]++;
        }
    }
    int freqmax = 0,j=-1;
    for(int i = 0;i<=max;i++){
        if(freq[i]>freqmax)
        {
           freqmax=freq[i];
           j=i;
        }
    }
    return j;
}