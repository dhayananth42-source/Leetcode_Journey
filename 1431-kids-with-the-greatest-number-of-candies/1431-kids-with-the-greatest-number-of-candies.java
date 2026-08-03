class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
         List<Boolean> s=new ArrayList<>();
        int k=0,max=0;
        for(int i=0;i<candies.length;i++)
        {
            if(max<candies[i])
            {
                max=candies[i];
            }
        }
        for(int i=0;i<candies.length;i++)
        {
             if(candies[i]+extraCandies >=max)
             {
                s.add(true);
             }
             else
             {
                 s.add(false);
             }
        }
        return s;
    }   
}