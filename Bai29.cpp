#include <stdio.h>
#include <math.h>
void xuat (int min, int max);
void nhap (double A[], int &n );
void timDoan (double A[], int n, int &min, int &max);

int main ()
{
	double A[100];
	int n;
	int min,max;
	nhap (A,n);
	timDoan (A,n, min, max);
	xuat (min, max);
	return 0;
}
void nhap (double A[], int &n )
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%lf", &A[i]);
}
void timDoan (double A[], int n, int &min, int &max)
{
	double mina=A[0];
	double maxa=A[0];
	for (int i=1; i<n; i++ )
	{
		if (maxa< A[i])
			maxa= A[i];
	}
	for (int i=1; i<n; i++)
	{
		if ( mina > A[i])
			mina = A[i];
	}
	min = floor (mina);
	max= ceil (maxa);
}
void xuat (int min, int max)
{
	printf ("%d %d", min, max);
}
