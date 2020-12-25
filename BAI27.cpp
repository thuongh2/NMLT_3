#include <stdio.h>
void xuat (int t);
void nhap (int A[], int &n);
int kiemTra (int A[], int n);
int soGanh (int n);
int tsoGanh (int t);
int main ()
{
	int A[100], n;
	nhap (A,n);
	int kt= kiemTra (A,n);
	xuat (kt);
	return 0;
}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
}
int kiemTra (int A[], int n)
{
	for (int i=0; i<n; i++)
	{
		if (soGanh (A[i]))
				return A[i];
	}
	return -1;
}
int tsoGanh (int t)
{
	int s=0;
	while (t>0)
	{
		int a=t %10;
		t=t/10;
		s= s*10 +a;
	}
	return s;

}
int soGanh (int t)
{
	if (t== tsoGanh (t))
		return 1;
	else
		return 0;
}
void xuat (int x)
{
	printf ("%d", x);
}
