/*//Boggle Game
//https://algospot.com/judge/problem/read/BOGGLE
#include <stdio.h>
char ar[7][7];
char wordList[10][25];
int dx[8] = { -1, -1, -1, 1,1,1,0, 0 };
int dy[8] = { -1, 0,1,-1,0,1,-1,1};


int checkWord(int x, int y, char *word){
	
	int i;
	if (ar[x][y] == '\0')
		return 0;
	if (ar[x][y] != *(word))
		return 0;

	if (*(word + 1) == '\0')
		return 1;

	for (i = 0; i < 8; i++){
		if (checkWord(x + dx[i], y + dy[i], (word + 1))){
			return 1;
		}
	}
	
	return 0; 
}


int getResult(int n){
	int i, j,result =0 ;

	for (i = 1; i < 6; i++){
		for (j = 1; j < 6; j++){
			if (ar[i][j] == wordList[n][0])
				result = checkWord(i, j, wordList[n]);
		}
	}
	return result;

	
}

int main(){
	int T,t,N;
	scanf("%d", &T);

	for (t = 0; t < T; t++){
		int i;
		for (i = 0; i < 5; i++){
			scanf("%s", &ar[i + 1][1]);
		}
		scanf("%d", &N);
		for (i = 0; i < N; i++){
			scanf("%s", &wordList[i]);
		}


		for (i = 0; i < N; i++){
			printf("%s ", wordList[i]);
			if (getResult(i)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		

	}

	return 0;
}
//*/