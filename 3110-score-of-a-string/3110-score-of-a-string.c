int scoreOfString(char* s) {
    int i=0,sum=0;
    while(s[i+1]!='\0')
    {
        sum+=abs(s[i]-s[i+1]);
        i++;
    }
    return sum;
    
}