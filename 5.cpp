#include <stdio.h>
void nhap (int &n);
int tinh (int n);
void xuat (int kq);
void  main ()
{
	int n;
	nhap (n);
	int kq=tinh(n);
	xuat (kq);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int tinh (int n)
{	
	int b;
	int s=0;
	for ( int i=1; i<=n ; i++)
	{
		b=1;
		for (int c=1; c<=i; c++)
			b=b*c;
		s+=b;
	}		
	return s;
}
void xuat (int kq)
{
	printf ("%d", kq);
}