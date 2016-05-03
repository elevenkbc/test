#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fftw3.h>

int main()
{
int N;
fftw_complex *x;
printf("請輸入N:\n");
scanf("%d ",&N);

x = (fftw_complex *)fftw_malloc(N*sizeof(fftw_complex));

initial(x,N);

return 0;
}
void initial(fftw_complex *x,int N)
{
	int k;
	for(k=0;k<N;k++)
	{
		x[k][0] = 1.0*k;
		x[k][1] = 0.0;
	}
	printf("Initial success.\n");
return 0;
}

