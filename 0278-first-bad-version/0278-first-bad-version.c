// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long long left=1,right=n;
    long long min=INT_MAX;
    while(left<=right)
    {
        long long mid=(left+right)/2;
        if(isBadVersion(mid)==1)
        {
            if(mid<min)
            {
                min=mid;
            }
        }
        if(isBadVersion(mid)==0)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return min;
    
}