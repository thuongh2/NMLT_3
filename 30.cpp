#include <stdio.h>
#include <math.h>
void nhap (double &x, double A[], int &n );
void tach (double A[], int n, double B[], int &nB);
int timAm (double x, double B[], int nB, double an);
void xuat (double kq);
double am (double B[], int nB);
int main ()
{
	double A[100],x;
	double B[100];
	int n,nB;
	double min;
	nhap (x,A,n);
	tach (A,n,B,nB);
	double an=am (B,nB);
	double kq=timAm (x,A,n,an);
	xuat (min);
	return 0;
}
void nhap (double &x, double A[], int &n )
{
	scanf ("%lf", &x);
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%lf", &A[i]);
}
double am (double B[], int nB)
{
	for (int i=0; i<n; i++)
	{
		if ( A)
	}
}
int timAm (double x, double B[], int nB, double an)
{
	if (an  >  x)
		return an;
	return 0;
}
void xuat (double kq)
{
	printf ("%lf", kq);
}
