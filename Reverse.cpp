void Reverse() //Function was completed ,Reverse 2 turns
{	
	if(count%2==0)
	{
		for(int i = 0;i<6;i++)
		{
			for(int j = 0;j<7;j++)
			{
				if(arr[i][j] != k1_board[i][j])
				{
					arr[i][j] = k1_board[i][j] ;
					if (arr[i][j]==0) c[j]++;
					else c[j]--;
				}
			}
		}
	}
   	else
	{
		for(int i = 0;i<6;i++)
		{
			for(int j = 0;j<7;j++)
			{
				if(arr[i][j] != k2_board[i][j])
				{
					arr[i][j] = k2_board[i][j];
					if (arr[i][j]==0) c[j]++;
					else c[j]--;
				}
			}
		}
	}
   	board(-1,0,0);
}