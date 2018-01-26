#include <stdio.h>
#include <stdlib.h>
void Hanio(int n, char a, char b, char c, int *total_move);
int main(int argc, char* argv[]){
	int total_move_v = 0;
	int *total_move_ptr = &total_move_v;

	printf("Hanio tower simulation \n");
	printf("please input the number of sheet : \n");
	int N;
	scanf("%d", &N);
	Hanio(N, 'A', 'B', 'C', total_move_ptr);
	printf("total move = %d \n", *total_move_ptr);
	system("PAUSE");
	return 0;
}
void Hanio(int n, char a, char b, char c, int *total_move){
	if (n == 1){
		printf("move sheet from %c to %c \n", a, c);
		*total_move = *total_move + 1;
	}
	else{
		Hanio(n - 1, a, c, b, total_move);
		Hanio(1, a, b, c, total_move);
		Hanio(n - 1, b, a, c, total_move);
	}

}