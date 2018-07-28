int dots(int grid[N][N], int &r, int &c)
{
	while (r < N) 
	{
		while (c < N)
		{
			if (grid[r][c] == UNASSIGNED)
				return (1);
			c++;
		}
		r++;
	}
	return (0);
}
 
int	findrow(int grid[N][N], int r, int n)
{
	while (c < N)
	{
		if (grid[r][c] == n)
			return (1);
		c++;
	}
	return (0);
}
 
int	 findcol(int grid[N][N], int c, int n)
{
	while (r < N)
	{
		if (grid[r][c] == num)
			return (1);
		r++;
	}
	return (0);
}
 
int findbox(int grid[N][N], int firstr, int firstc, int n)
{
	while (r < 3)
	{
		while (c < 3)
		{
			if (grid[r+firstr][c+firstc] == num)
				return (1);
			c++;
		}
		r++;
	}
	return (0);
}
 
int assign(int grid[N][N], int r, int c, int n)
{
	return !findrow(grid, r, n) && !findcol(grid, c, n) &&
		!findbox(grid, r - r%3 , c - c%3, n);
}

void print(int grid[N][N])
{
	while (r < N)
	{
		while (c < N)
		{
			printf("%2d", grid[r][c]);
			c++;
		}
		printf("\n");
		r++;
	}
}
