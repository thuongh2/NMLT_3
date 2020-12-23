#include <stdio.h>
int tinhSoDoi (int n);
int tinhSo (int tinhSoDoi, int n);
void nhap (int &n);
void xuat (int kq);
void main ()
{
	int n;
	nhap (n);
	int tinhSoDoi;
	int kq=tinhSo (tinhSoDoi, n);
	xuat (kq);
}
int tinhSo (int tinhSoDoi, int n)
{
	if (n==tinhSoDoi)
		return 0;
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
	if (kq==0)
		printf ("%d true", kq);
	else 
		printf ("flase");
}