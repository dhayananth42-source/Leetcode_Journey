bool isvowel(char s)
{
    return s=='a' || s=='e' || s=='i' || s=='o' || s=='u';
}
int maxVowels(char* s, int k) 
{
    int left=0,right=k,vowel_count=0,max=0,len=strlen(s);
    for(int i=0;i<k;i++)
    {
        if(isvowel(s[i]))
        {
            vowel_count++;
        }
    }
    max=vowel_count;
    while(right< len)
    {
        if(isvowel(s[left]))
        {
            vowel_count--;
        }
        if(isvowel(s[right]))
        {
            vowel_count++;
        }
        if(max<vowel_count)
        {
            max=vowel_count;
        }
        s[left++];
        s[right++];
    }
    return max;
}