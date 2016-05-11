#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int show(double *A, int n1, int n2);
int gram(double *A, double *Q, double *R, int n1, int n2);
int multipler(double *A, double *B, double *C, int n1, int n2, int n3);

int main() 
{
	int i;
	int n1=7,n2=5;
	double *A, *Q, *R, *Y1;
	A = (double*)malloc(n1*n2*sizeof(double));
	Q = (double*)malloc(n1*n2*sizeof(double));
	R = (double*)malloc(n1*n2*sizeof(double));
	Y1 = (double*)malloc(n1*n2*sizeof(double)); 

	//定義要計算gram schmidt 的矩陣A
	for(i=0;i<n1*n2;i++)
	{
		A[i]=i;
	}
	printf("A= \n");
	show(A,n1,n2);
	gram(A,Q,R,n1,n2);
	printf("Q= \n");
	show(Q,n1,n2);
	printf("R= \n");
	show(R,n2,n2);
	multipler(Q,R,Y1,n1,n2,n2);
	printf("計算Q*R= \n");	
	show(Y1,n1,n2);	
	
	

	return 0;
}
int gram(double *A, double *Q, double *R, int n1, int n2)
{
	int i,j,k;
	double *vj;
	double S;
	vj = (double*)malloc(n1*sizeof(double));
	
	for(i=0;i<n2*n2;i++) R[i]=0.0;
	for(i=0;i<n1*n2;i++) Q[i]=0.0;
	
	for(j=0;j<n2;j++)
	{
		
		//將aj 存給 vj 開始
		for(k=0;k<n1;k++)
		{
			vj[k] = A[k+j*n1];
		}
		//將aj 存給 vj 結束
		
		for(i=0;i<j;i++)
		{
			
			//計算rij  開始
			S = 0.0;
			for(k=0;k<n1;k++)
			{
				S = S + (Q[k+i*n1]*A[k+j*n1]);
			}
			R[i+j*n2] = S;

			
			//計算rij  結束
			
			//vj=vj-rij*qi 開始
			for(k=0;k<n1;k++)
			{
				vj[k] = vj[k] - R[i+j*n2]*Q[k+i*n1];	
			}
			//vj=vj-rij*qi 結束 
			

		}
		
		//rjj = norm(vj)  開始 
		S = 0;
		for(k=0;k<n1;k++)
		{
			S = S + (vj[k]*vj[k]);
		} 
		R[j+j*n2] =  sqrt(S);
		//rjj = norm(vj)  結束
		
		//qj = vj/rjj  開始
		for(k=0;k<n1;k++)
		{
			Q[k+j*n1]=vj[k]/R[j+j*n2];
		}
		//qj = vj/rjj  結束 
	}
	
}
int show(double *A, int n1, int n2)
{
	int i, j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%f ",A[i+j*n1]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
int multipler(double *A, double *B, double *C, int n1, int n2, int n3)
{
	int i, j, k;
	double tem;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n3;j++)
		{
			tem=0.0;
			for(k=0;k<n2;k++)
			{
				tem = tem + (A[i+n1*k]*B[k+n2*j]);
			}
			C[i+j*n1]=tem;
		}
	}
	return 0;
}
