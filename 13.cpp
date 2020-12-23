#include <stdio.h>
void xuat (int kt);
void nhap (int &n);
int kiemtra (int n);
void main ()
{
	int n;
	nhap (n);
	int kt= kiemtra (n);
	xuat (kt);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int kiemtra (int n)
{
	int t=0;
	int d;
	while (n>0)
	{
		int a =n%10;
		n=n/10;
		d=0;
		for ( int i=1; i<=a; i++)
		{
			if (a%i==0)
				d++;
		}
		if (d==2)
			t++;
	}
	return t;
}
void xuat (int kt)
{
	printf ("%d" , kt);
}
