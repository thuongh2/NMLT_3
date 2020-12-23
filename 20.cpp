// liet ke so chinh phuong nho hon n
#include <stdio.h>
int lietKe (int n);
void nhap (int &n);
void xuat (int x);
int soChinhPhuong (int n);
void main ()
{
	int n;
	nhap (n);
	int kq=lietKe (n);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (int x)
{
	printf ("%d ", x);
}
int soChinhPhuong (int n)
{
	int d=0;
	for (int i=1; i<n; i++)
	{
		if (i*i==n)
			return 1;
	}
	return 0;
}
int lietKe (int n)
{
	for (int i=1; i<n; i++)
	{
		if (soChinhPhuong (i))
			xuat (i);
	}
	return 1;
}