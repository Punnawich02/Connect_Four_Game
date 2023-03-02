int count = 0;
void Gravity(int x){
    if(count == 30){
        for(int a = 6; a > 0; a--){
            for(int b = 0; b < 7; b++){
                arr[a][b] = arr[a-1][b];
            }
        }
    }
    for(int d = 0; d < 7; d++){
        arr[0][d] = 0;
    }
    for(int i = 0; i < 7; i++){
        c[i]++;
    }
    c[x]++;
    board(-1,0,0);
}