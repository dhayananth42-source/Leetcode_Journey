class Solution {
    public int findFinalValue(int[] arr, int original) {
         for(int i=1;i<arr.length;i++)
        {
           int key=arr[i];
           int j=i-1;
          while(j>=0 && arr [j]>key)
          {
             arr[j+1]=arr[j];
            j--;
          }
        arr[j+1]=key;
         
    }
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==original)
            {
                original*=2;
            }
        }
        return original;
        
    }
}