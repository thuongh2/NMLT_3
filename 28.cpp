#include <stdio.h>
void xuat (int t);
void nhap (int A[], int &n);
int kiemTra (int A[], int n);
int soLe (int n);
int tsole (int t);
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
		if (soLe (A[i]))
				return A[i];
	}
	return -1;
}
int tsole (int t)
{
	int a;
	while (t>0)
	{
		a=t %10;
		t=t/10;
	
	}
	return a;

}
int soLe (int a)
{
	if (tsole (a)%2!=0)
		return 1;
	else
		return 0;
}
void xuat (int x)
{
	printf ("%d", x);
}
