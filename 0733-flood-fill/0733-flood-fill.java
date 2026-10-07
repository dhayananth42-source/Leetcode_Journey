class Solution {
    static void dfs(int[][]mat,int st_row,int st_col,int color,boolean [][] visited,int fixed)
    {
        if(visited[st_row][st_col]==true)return;
        if(mat[st_row][st_col]!=fixed)return;
        mat[st_row][st_col]=color;
        visited[st_row][st_col]=true;
        if(st_row+1 < mat.length)
        {
            dfs(mat,st_row+1,st_col,color,visited,fixed);
        }
        if(st_row-1 >= 0)
        {
            dfs(mat,st_row-1,st_col,color,visited,fixed);
        }
        if(st_col+1 < mat[0].length)
        {
            dfs(mat,st_row,st_col+1,color,visited,fixed);
        }
        if(st_col-1 >=0)
        {
            dfs(mat,st_row,st_col-1,color,visited,fixed);
        }
    }
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        boolean[][] visited=new boolean[image.length][image[0].length];
        int fixed=image[sr][sc];
        dfs(image,sr,sc,color,visited,fixed);
        return image;

        
    }
}