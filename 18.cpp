// dem so luong so hoan hao nho hon n
#include <stdio.h>
void xuat (int kt);
void nhap (int &n);
int soHH (int n);
int demSo (int n);
void main ()
{
	int  n;
	nhap (n);
	int kt=demSo (n);
	xuat (kt);
}
void nhap (int &n)
{
	scanf ("%d" , &n);
}
int soHH (int n)
{
	int s=0;
	for (int i=1; i<n; i++)
	{
		if (n%i==0)
			s=s+i;
	}
	if (s==n)
		return 1;
	return 0;
}
int demSo (int n)
{
	int d=0;
	for (int i=1; i<n; i++)
	{
		if (soHH (i))
			d++;
	}
	return d;
}
void xuat (int kt)
{
	printf ("%d", kt);
}
