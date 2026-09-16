bool isPerfectSquare(int num) {
    long long mid=num/2;
    int left=1,right=num;
    while(left<=right)
    {
        if(mid*mid==num)
        {
            return true;
        }
        else if(mid*mid >num)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
        mid=(left+right)/2;
    }
    return false;

}