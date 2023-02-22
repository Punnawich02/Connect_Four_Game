void Destroyed_T(int x){
    int k = 0;
    k=insert(x);
	if(x == 0){
		if(arr[k+1][x+1]) c[x+1]++;
	}
	else if(x < 6){
		if(arr[k+1][x+1]) c[x+1]++;
		if(arr[k+1][x-1]) c[x-1]++;
	}
	else if(x == 6){
		if(arr[k+1][x-1]) c[x+1]++;
	}
	if(c[x] <= 4) c[x] = c[x]+3;
	else c[x] = c[x]+2;
	if(c[x] > 5) c[x] = 5;
    arr[k+2][x]= 0;
	arr[k+1][x-1]= 0;
	arr[k+1][x+1]= 0;
	if(arr[k][x-1] == 1 or arr[k][x-1] == 2){
		for(int a = 0;a<6;a++){
			if(arr[k-a][x-1] != 0 and arr[k-a][x-1] != 1 and arr[k-a][x-1] != 2){
				arr[k-a][x-1] = 0;
			}
			arr[k+1-a][x-1] = arr[k-a][x-1];
		}
	}
	if(arr[k][x+1] == 1 or arr[k][x+1] == 2){
		for(int b = 0;b<6;b++){
			if(arr[k-b][x+1] != 0 and arr[k-b][x+1] != 1 and arr[k-b][x+1] != 2){
				arr[k-b][x+1] = 0;
			}
				arr[k+1-b][x+1] = arr[k-b][x+1];
		}

	}
	board(-1,0,0);
}
