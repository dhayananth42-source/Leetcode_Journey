bool checkGoodInteger(int n) {
    int dsum=0,ssum=0,digit;
    while(n!=0)
    {
        digit=n%10;
        dsum+=digit;
        ssum+=(digit*digit);
        n/=10;

    }
    if(ssum-dsum >=50)
    {
        return "true";
    }
    return false;
    
}