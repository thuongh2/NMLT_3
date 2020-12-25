#include <stdio.h>
void xuat (int A[], int n);
void nhap (int A[], int &n);
void doiCho (int A[], int n);
int main ()
{
	int A[100], n;
	nhap (A,n);
	doiCho (A,n);
	xuat (A,n);
	return 0;
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
void doiCho (int A[], int n)
{
	int max=A[0];
	int m1=0;
	int m2=0;
	for (int i=1; i<n; i++)
	{
		if (A[i]> max)
		{
			max=A[i];
			m1=i;
	
		}
	int min =A[0];
		for (int j=1; j<n; j++)
	{
		if (A[j]< min)
		{
			min=A[j];
			m2=j;
		}
	}
	}

		hoanVi (A[m1], A[m2]);
	
}
void hoanVi (int &min, int &max)
{
	int c= min;
	min=max;
	max=c;
}
void xuat (int A[], int n)
{

	for (int i=0; i<n; i++)
		printf ("%d ", A[i]);
}
