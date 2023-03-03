void Reverse(int col_p1,int col_p2) //Function was completed ,Reverse 2 turns
{	
	arr[c[col_p1]+1][col_p1] = 0; //set this row and column to 0
	arr[c[col_p2]+1][col_p2] = 0;
	c[col_p2] += 1; //make a free space
	c[col_p1] += 1;
}