// liet ke so hoan hao nho hon n.
#include <stdio.h>
void nhap (int &n);
int  soHH (int n);
void xuat (int x);
int lietKe (int n);
void main ()
{
	int n;
	nhap (n);
	int  kt=lietKe (n);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (int x)
{
	printf ("%d", x);
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
int lietKe (int n)
{
	for (int i=1; i<n; i++)
	{
		if (soHH (i))
			xuat (i);
	}
	return 1;
}
