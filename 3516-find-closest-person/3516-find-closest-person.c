int findClosest(int x, int y, int z) {
    if(abs(z-x)==abs(y-z))
    {
        return 0;
    }
    else if(abs(z-x)>abs(y-z))
    {
        return 2;
    }
    else
    {
        return 1;
    }
    
}