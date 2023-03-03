void swap(int row ,int col,string command)
{
	int kept = 0; //Keep data 
	
	//Swap UP
	if(command == "UP")
	{
		if(row >= 1 and row <= 5)
		{
			kept = arr[row][col];
			arr[row][col] = arr[row - 1][col];
			arr[row - 1][col] = kept;
		}
		else
		{
			cout << "You can not swap!!" << endl;
			cout << "Row and Column: ";
			cin >> row >> col;
			swap(row,col,"UP");	
		}
	}
	
	//Swap LEFT
	else if(command == "LEFT")
	{
		if(col >= 1 and col <= 6)
		{
			kept = arr[row][col];
			arr[row][col] = arr[row][col - 1];
			arr[row][col - 1] = kept;	
		}
		else
		{
			cout << "You can not swap!!" << endl;
			cout << "Row and Column: ";
			cin >> row >> col;
			swap(row,col,"LEFT");
		}
	}
	
	//Swap RIGHT
	else if(command == "RIGHT")
	{
		if(col <= 5 and col >= 0)
		{
			kept = arr[row][col];
			arr[row][col] = arr[row][col + 1];
			arr[row][col + 1] = kept;
		}
		else
		{
			cout << "You can not swap!!" << endl;
			cout << "Row and Column: ";
			cin >> row >> col;
			swap(row,col,"RIGHT");
		}
	}
	
	//Swap DOWN
	else if(command == "DOWN")
	{
		if(row <= 4 and row >= 0)
		{
			kept = arr[row][col];
			arr[row][col] = arr[row + 1][col];
			arr[row + 1][col] = kept;	
		}
		else
		{
			cout << "You can not swap!!" << endl;
			cout << "Row and Column: ";
			cin >> row >> col;
			swap(row,col,"DOWN");
		}
	}
}