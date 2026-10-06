int isAnagram(char* s, char* t) 
{
     int n1,n2;
     n1=strlen(s);
     n2=strlen(t);
     if(n1!=n2)
     {
        return false;
     }
     int arr[26];
     for(int i=0;i<26;i++)
     {
        arr[i]=0;
     }
     for(int i=0;i<n1;i++)
     {
        arr[s[i]-'a']++;
        arr[t[i]-'a']--;
     }
     for(int i=0;i<n1;i++)
     {
        if((arr[s[i]-'a'])!=0)
        {
            return false;
        }
     }
     return true;
}