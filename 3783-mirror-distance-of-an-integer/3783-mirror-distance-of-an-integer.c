int mirrorDistance(int n) {
    int x=n,rev=0;
    while(n>=10)
    {
        rev+=n%10;
        rev*=10;
        n/=10;
    }
    rev+=n%10;
    return abs(x-rev);
    
}