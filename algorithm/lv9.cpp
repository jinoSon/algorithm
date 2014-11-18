//mt
#include <stdio.h>
void mm(int i){
	
	if (i != 1) mm(i - 1);
	printf("%d", i);
	//mm(i - 1);

}

int main(){
	int i;
	scanf("%d", &i);
	mm(i);
	return 0;
}



/*/tobin
#include <stdio.h>

void print(int n)
{
	
	if (n != 1) print(n/2);
	printf("%d", n%2);
		
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	print(i);
	return 0;
}
//*/

/*/sfn
#include <stdio.h>
int a(int n, int dit, int sum,int div){
	if (n / div == 0)
		return sum + n%div;
	a(n/div, dit*div, sum + n%div,div);
	
}


int main(){
	int i;
	int d12;
	for (i = 2992; i < 10000; i++){
		d12 = a(i, 10, 0,10);
		if (d12 == a(i, 12, 0,12) && d12 == a(i, 16, 0,16)){
			printf("%d\n", i);
		}
	}

	return 0;
}
//*/

/*/upstair
#include <stdio.h>

int upStair(int n, int now){
	if (now == n)
		return 1;
	if (now > n)
		return 0;
	return upStair(n, now + 1) + upStair(n, now + 2);


}

int main(){

	int N;
	scanf("%d", &N);

	printf("%d", upStair(N, 0));

	return 0;
}
//*/


/*/ euclid
#include <stdio.h>

 int gcd( int a,  int b){
	if (b == 0)
		return a;
	gcd(b, a%b);

}

int main(){
	int a, b, gc;

	scanf("%d %d", &a, &b);
	gc = gcd(a, b);
	printf("%d %d", gc, a / gc*b / gc*gc);

}
//*/