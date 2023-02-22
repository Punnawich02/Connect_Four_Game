void Destroyed_T(int x){
    int k = 0;
    k=insert(x);
	if(x == 1){
		c2 = c2+1;
		if(c1 <= 5){
			c1 = c1+3;
		}
		else{
			c1 = c1+2;
		}
	}
	else if(x == 2){
		c1 = c1+1;
		c3 = c3+1;
		if(c2 <= 5){
			c2 = c2+3;
		}
		else{
			c2 = c2+2;
		}
	}
	else if(x == 3){
		c2 = c2+1;
		c4 = c4+1;
		if(c3 <= 5){
			c3 = c3+3;
		}
		else{
			c3 = c3+2;
		}
	}
	else if(x == 4){
		c3 = c3+1;
		c5 = c5+1;
		if(c4 <= 5){
			c4 = c4+3;
		}
		else{
			c4 = c4+2;
		}
	}
	else if(x == 5){
		c4 = c4+1;
		c4 = c4+1;
		if(c5 <= 5){
			c5 = c5+3;
		}
		else{
			c5 = c5+2;
		}
	}
	else if(x == 6){
		c5 = c5+1;
		c7 = c7+1;
		if(c6 <= 5){
			c6 = c6+3;
		}
		else{
			c6 = c6+2;
		}
	}
	else if(x == 7){
		c6 = c6+1;
		if(c7 <= 5){
			c7 = c7+3;
		}
		else{
			c7 = c7+2;
		}
	}
    arr[k+2][x-1]= ',';
	arr[k+1][x-2]= ',';
	arr[k+1][x]= ',';
	if(arr[k][x-2] == 'O' or arr[k][x-2] == 'X'){
		for(int a = 0;a<6;a++){
			if(arr[k-a][x-2] != ',' and arr[k-a][x-2] != 'O' and arr[k-a][x-2] != 'X'){
				arr[k-a][x-2] = ',';
			}
			arr[k+1-a][x-2] = arr[k-a][x-2];
			
		}
	}
	if(arr[k][x] == 'O' or arr[k][x] == 'X'){
		for(int b = 0;b<6;b++){
			if(arr[k-b][x] != ',' and arr[k-b][x] != 'O' and arr[k-b][x] != 'X'){
				arr[k-b][x] = ',';
			}
				arr[k+1-b][x] = arr[k-b][x];
			
		}

	}
    
    for(int f=1; f<8;f++)
	{
		cout<<f<<'|';
	}
	cout<<endl;
	for(int i=0;i<6;i++)
	{
		for(int j =0;j<7;j++)
		{
			cout<<arr[i][j]<<'|';
		}
		cout<<endl;
	}

}