class Solution(object):
    def maxIncreaseKeepingSkyline(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        bottom = []
        left = []
        output = 0
        for i in range(len(grid)):
            left.append(max(grid[i]))
        for i in range(len(grid[0])):
            tmp = []
            for j in range(len(grid)):
                tmp.append(grid[j][i])
            bottom.append(max(tmp))
        #print bottom
        #print left
        
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] < left[i] and grid[i][j] < bottom[j]:
                    tmp_v = left[i] if left[i] < bottom[j] else bottom[j]
                    output += (tmp_v - grid[i][j])
        return output