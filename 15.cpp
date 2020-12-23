#include <stdio.h>
void main ()
{
	int n;
	nhap (n);
	int kt=kiemtra (n);
	xuat (kt);
}
void nhap (int &n)
{
	scanf ("%d" , &n);
}
int kiemtra (int &n)
{
	int t=0;
	while ( n>0)
	{
		int a= n%10;
		if (a>t)
		{
			t=a;

		}

		
	}
}