bool isPerfectSquare(int num) {
    long long mid=num/2;
    if(mid*mid >num)
    {
        for(long long i=1;i<mid;i++)
        {
            if(i*i==num)
            {
                return true;
            }
        }
    }
    else if(mid*mid <num)
    {
        for(long long i=mid+1;i<=num;i++)
        {
            if(i*i==num)
            {
                return true;
            }
        }
    }
    else if(mid*mid == num)
    {
        return true;
    }
    return false;
}