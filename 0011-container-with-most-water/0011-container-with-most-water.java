class Solution {
    public int maxArea(int[] height) {
        int i=0,j=height.length-1,area=0,max=0;
        while(i<j)
        {
            area=(j-i)*Math.min(height[i],height[j]);
            if(max<area)
            {
               max=area;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max;
    }
}