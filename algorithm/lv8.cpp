/*//cryption
#include <stdio.h>

int arr[9];
int N = 0;

int isGroup(int n){
	int i = 0; 
	for (i = 0; i < N; i++){
		if (arr[i] == n)
			return 1;
	}
	return 0;
}

int IsNum(int n, int dit){
	int i = 1;
	int k = 10;
	for (i = 0; i < dit; i++){
		if (!isGroup(n%k)){
			return 0;
		}
		n -= n%k;
		n /= 10;
		
	}
	return 1;
}
int isDit(int n, int dit){
	int i = 0;
	int d = 1;
	for (i = 1; i < dit; i++){
		d *= 10;
	}
	if (n / d>=10){
		return 0;
	}
	else{
		if (n / d == 0)
			return 0;
	}
	return 1;
}


void sort(int n){
	int i, j, tmp;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (arr[i]<arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main(){


	int i;
	int d1, d2, d3, d4,d5;
	int a1, a2;
	int count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
//	bool isd = IsNum(744, 3);
	sort(N);
	for (d1 = 0; d1 < N; d1++){
		for (d2 = 0; d2 < N; d2++){
			for (d3 = 0; d3 < N; d3++){
				for (d4 = 0; d4 < N; d4++){
					for (d5 = 0; d5 < N; d5++){
						a1 = arr[d1] * 100 + arr[d2] * 10 + arr[d3];
						a2 = arr[d4] * 10 + arr[d5];
						if (isDit(a1*arr[d5], 3) && isDit(a1*arr[d4],3)){
							if (IsNum(a1*arr[d5], 3) && IsNum(a1*arr[d4], 3)){
								if (isDit(a1*a2, 4)){
									if (IsNum(a1*a2, 4)){
										count++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}

//*

/*self_num
#include <stdio.h>
int devideSum(int n){
	int i, result = 0;
	int arr[4];
	result += n % 10; // 1의 자리
	result += (n / 10) % 10; //10의자리
	result += (n / 100) % 10; //100
	result += (n / 1000) % 10; //1000

	return result;

}

int selfNum(int n){
	int i;
	int result = 1;
	for (i = n; i >0 ; i--){

		if (i + devideSum(i) != n){
			result = 1;
		}
		else{
			result = 0;
			break;
			
		}

			
	}
	return result;
	
}

int main(){

	int i;
	for (i = 1; i <= 10000; i++){
		if (selfNum(i)){

			printf("%d\n", i);
		}
	}

	return 0;
}
*/


/*//tencard
#include <stdio.h>
int input[4];
int ar[9999];
int initAr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int min = 0;
int idx = 0;
int connect(int* arr, int idx){
	int mini =9999;
	int i,tmp;
	for (i = 0; i < 4; i++){
		tmp = input[(0 + i) % 4] * 1000 + input[(1 + i) % 4] * 100 +
			input[(2 + i) % 4] * 10 + input[(3 + i) % 4];
		
		if (mini > tmp ){
			mini = tmp;
			
		}
		
	}
	return mini;
}

int sort(int k){
	int i, j, tmp;
	for (i = 0; i < idx; i++){
		for (j = 0; j < idx; j++){
			if (ar[i] < ar[j]){
				tmp = ar[i];
				ar[i] = ar[j];
				ar[j] = tmp;
			}
		}
	}

	for (i = 0; i < idx; i++){
		if (ar[i] == k)
			break;
	}
	return i+1;
}

int checkArr(int k){
	int i;
	if (idx == 0){
	return 1;
	}
	else{
		for (i = 0; i < idx; i++){
			if (ar[i] == k){
				return 0;
			}
		}
	}
	

	return 1;
}
void makeMap(){
	int i1, i2, i3, i4;
	for (i1 = 1; i1 <= 9; i1++){
		input[0] = i1;
		for (i2 = 1; i2 <= 9; i2++){
			input[1] = i2;
			for (i3 = 1; i3 <= 9; i3++){
				input[2] = i3;
				for (i4 = 1; i4 <= 9; i4++){
					input[3] = i4;
					int tmp = connect(input, 4);
					if (checkArr(tmp)){
						ar[idx++] = tmp;
					}
				}
			}
				
		}
			

	}
		

}

int main(){
	
	scanf("%d %d %d %d", &input[0], &input[1], &input[2], &input[3]);
	min = connect(input, 4);
	makeMap();
	printf("%d", sort(min));
	return 0;
}
//*/

/*/goldbach
#include <stdio.h>

unsigned long IsPrime(unsigned long t){
	unsigned long i = 0;
	for (i = 2; i <= sqrtl(t); i++){
		if (t%i == 0){
			i = 0;
			break;
		}
			
	}
	if (i == 0){
		return 0;
	}
	else{
		return t;
	}
}

int main(){
	unsigned long N, i;
	scanf("%lu", &N);
	for (i = 3; i <= N; i += 2){
		if (IsPrime(i))
			if (IsPrime(N - i)){

				printf("%lu = %lu + %lu", N, i, N - i);
				
				break;
			}
	}
	if (i == N)
		printf("Goldbach's conjecture is wrong.");
	return 0;
}
//*/