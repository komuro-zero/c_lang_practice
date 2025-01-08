int ** createPuzzle(){
	int ** puzzle;
	int i,j;
	
	int array[9][9] = {
		0,1,9,	0,0,0,	0,0,0
		0,0,0,	0,0,0,	0,0,0
		0,0,0,	0,0,0,	0,0,0

		0,0,0,	0,0,0,	0,0,0
		0,0,0,	0,0,0,	0,0,0
		0,0,0,	0,0,0,	0,0,0

		0,0,0,	0,0,0,	0,0,0
		0,0,0,	0,0,0,	0,0,0
		0,0,0,	0,0,0,	0,0,0};
	
	puzzle = (int**)malloc(sizeof(int*)*9);
	for (i = 0;i < 9; i++){
	
		puzzle = (int*)malloc(sizeof(int)*9);
		
		for (j= 0; j < 9; j++){

			puzzle = array[i][j];
}
}
	
	return array;
}

void printPuzzle(int** puzzle){
	int i,j;
	for (i=0; i< 9; i++){
		for (j=0; j< 9;j++){

			printf("%d", puzzle[i][j]);
		}
		printf("\n");
	}
}
