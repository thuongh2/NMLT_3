#include <stdio.h>
void xuat (int kq);
void nhap (int &a, int &b);
int uChung (int a, int b);
void main ()
{
	int a, int b;
	nhap (a, b);
	int kq=uChung (a,b);
	xuat (kq);
}
void nhap (int &a, int &b)
{
	scanf ("%d%d", &a, &b);
}
int uChung (int a, int b)
{
	if (a==b)
		return a;
	while (a!=b)
	{
		if (a>b)
			a=a-b;
		else 
			b=b-a;
	}
	return a;
}
void xuat (int kq)
{
	printf ("%d", kq);
}