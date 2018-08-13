int maxIncreaseKeepingSkyline(int** grid, int gridRowSize, int *gridColSizes) {
    printf("%d", *gridColSizes);
    int max[gridRowSize][*gridColSizes];
    int max_r[gridRowSize];
    int max_c[*gridColSizes];
    int tmp = 0, sum = 0;
    for(int i = 0; i < gridRowSize; i++)
    {
        tmp = 0;
        for(int j = 0; j < *gridColSizes; j++)
        {
            if(tmp < grid[i][j])
                tmp = grid[i][j];
        }
        max_r[i] = tmp;
    }
    for(int i = 0; i < *gridColSizes; i++)
    {
        tmp = 0;
        for(int j = 0; j < gridRowSize; j++)
        {
            if(tmp < grid[j][i])
                tmp = grid[j][i];
        }
        max_c[i] = tmp;
    }
    for(int i = 0; i < gridRowSize; i++)
    {
        for(int j = 0; j < *gridColSizes; j++)
        {
            if(max_r[i] > max_c[j])
                sum += max_c[j] - grid[i][j];
            else
                sum += max_r[i] - grid[i][j];
            
        }
    }
    return sum;
}