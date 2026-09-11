class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int s_ind=0,t_ind=0;
        if(name.length() > typed.length())
        {
            return false;
        }
         if(name.length()==1 && typed.length()==1)
        {
            if(name.charAt(0) == typed.charAt(0))
            {
                return true;
            }
            return false;
        }
        while(s_ind<name.length() && t_ind<typed.length())
        {
            if(name.charAt(0)!=typed.charAt(0))
            {
                return false;
            }
            if(name.charAt(s_ind)==typed.charAt(t_ind))
            {
                s_ind++;
                t_ind++;
            }
            else 
            {
                if(t_ind>0 && typed.charAt(t_ind)!=typed.charAt(t_ind-1))
                {
                    return false;
                }
                t_ind++;
            }
        }
        if((s_ind<name.length() && t_ind==typed.length()))
        {
            return false;
        }
        if(t_ind<typed.length())
        {
            for(int i=t_ind;i<typed.length();i++)
            {
                if(typed.charAt(i)!=name.charAt(s_ind-1))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
}