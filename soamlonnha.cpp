#include <stdio.h>
void nhap (float &x,float A[], int &n);

float timAm (float x, float A[], int n);
void xuat (float am);
int main ()
{
	float A[100],x;
	int n;
	nhap (x,A,n);
	float am =timAm (x,A,n);
	xuat (am);
	return 0;
}
void nhap (float &x,float A[], int &n)
{
	scanf ("%f", &x);
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%f", &A[i]);
}
float timAm (float x,float A[], int n)
{
	float a;
	for (int i=0; i<n; i++)
	{
		if (A[i]<0)
			a=A[i];
	}
	if (a>x)
		return a;
	return 0;
		

}

void xuat (float am)
{
	printf ("%f", am);
}
