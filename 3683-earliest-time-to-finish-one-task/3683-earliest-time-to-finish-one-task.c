int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int min=INT_MAX,sum;
    for(int i=0;i<tasksSize;i++)
    {
        sum=0;
        for(int j=0;j<2;j++)
        {
            sum+=tasks[i][j];
        }
        if(min>sum)
        {
            min=sum;
        }
    }
    return min;
}