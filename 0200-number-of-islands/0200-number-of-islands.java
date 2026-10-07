class Solution {
    static void dfs(char[][]mat,int st_row,int st_col,boolean[][] visited)
    {
        if(visited[st_row][st_col]==true)return;
        if(mat[st_row][st_col]=='0')return;
        visited[st_row][st_col]=true;
        if(st_row+1 < mat.length)
        {
            dfs(mat,st_row+1,st_col,visited);
        }
        if(st_row-1 >= 0)
        {
            dfs(mat,st_row-1,st_col,visited);
        }
        if(st_col+1 < mat[0].length)
        {
            dfs(mat,st_row,st_col+1,visited);
        }
        if(st_col-1 >=0)
        {
            dfs(mat,st_row,st_col-1,visited);
        }
    }
    public int numIslands(char[][] grid) {
        int island_count=0;
        boolean[][] visited=new boolean[grid.length][grid[0].length];
        for(int curr_row=0;curr_row<grid.length;curr_row++)
        {
            for(int curr_col=0;curr_col<grid[0].length;curr_col++)
            {
                if(grid[curr_row][curr_col]=='1' && visited[curr_row][curr_col]==false)
                {
                    island_count++;
                    dfs(grid,curr_row,curr_col,visited);

                }
            }
        }
        return island_count;
        
    }
}