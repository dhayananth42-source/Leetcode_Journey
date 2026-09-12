int heightChecker(int* heights, int heightsSize) {
    int *arr=(int*)malloc(heightsSize*sizeof(int));
    for(int i=0;i<heightsSize;i++)
    {
        arr[i]=heights[i];
    }
    int temp,count=0;
    for(int i=0;i<heightsSize-1;i++)
    {
        for(int j=0;j<heightsSize-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     for(int i=0;i<heightsSize;i++)
    {
         if(arr[i]!=heights[i])
         {
            count++;
         }
    }
    return count;

    
     
    
}