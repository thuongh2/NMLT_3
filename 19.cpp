//dem so luong so nguyen to nho hon n
#include <stdio.h>
void xuat (int kt);
void nhap (int &n);
int soNT (int n);
int demSo (int n);
void main ()
{
	int n;
	nhap (n);
	int kt=demSo (n);
	xuat (kt);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int soNT (int n)
{	int d=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
			d++;
	}
	if (d==2)
		return 1;
	return 0;
}
int demSo (int n)
{
	int s=0;
	for (int i=1; i<n; i++)
	{
		if (soNT (i))
			s++;
	}
	return s;
}
void xuat (int kt)
{
	printf ("%d", kt);
}