#include <stdio.h>
void nhap (int &a, int &b, int &n);
void xuat (int kq);
int tinh (int a, int b, int n );
void main ()
{
	int a,b,n;
	nhap (a,b,n);
	int kq=tinh (a,b,n);
	xuat (kq);
}
void nhap (int &a, int &b, int &n)
{
	scanf ("%d %d %d", &a, &b, &n);
}
int tinh (int a, int b, int n)
{
	int d=0;
	if (a,b<n)
	{
		for (int i=1; i<n; i++)
		{	if (i%a==0 && i%b !=0)
				d=d+i;
		}
		return d;
	}
	else
		return 1;
}
void xuat (int kq)
{
	if (kq==1)
		printf ("false");
	else 
	printf ("%d", kq);
}
