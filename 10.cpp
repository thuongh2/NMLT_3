#include <stdio.h>
int tinhSoDoi (int n);
void nhap (int &n);
void xuat (int kq);
void main ()
{
	int n;
	nhap (n);
	int kq=tinhSoDoi (n);
	xuat (kq);
}
int tinhSoDoi (int n)
{
	int s=0;
	while (n>0)
	{
		int a=n %10;
		n=n /10;
		s=s*10+a;
	}
	return s;
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (int kq)
{
	printf ("%d", kq);
}