#include <stdio.h>
void xuat (int kq);
void nhap (int A[], int &n);
int UCLN (int A[], int n);
int UC (int a, int b);
int main ()
{
	int A[100], n;
	nhap (A,n);
	int kq= UCLN (A,n);
	xuat (kq);
	return 0;
}
void xuat (int kq)
{
	printf ("%d", kq);
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0;i<n; i++)
		scanf ("%d", &A[i]);
}
int UCLN (int A[], int n)
{
	int uc= A[0];
	for (int i=1; i<n; i++)
		uc = UC (uc, A[i]);
	return uc;
}
int UC (int an, int b)
{
	if (a==b)
		return a;
	else
	{
		while (a!=b)
		{
			if (a>b)
				a=a-b;
			else
				b=b-a;
		}
		return a;
	}
}
