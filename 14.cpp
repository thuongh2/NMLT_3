#include <stdio.h>
void nhap (int &n);
int soChan (int n);
void xuat (int kt );
void  main ()
{
	int n;
	nhap (n);
	int kt=soChan (n);
	xuat (kt);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int soChan (int n)
{
	int sole =0;
	while (n>0)
	{
		int a=n%10;
		if (a%2   != 0)
			sole++;
		n=n/10;
	}
	return sole;
}
void xuat (int kt )
{
	if (kt==0)
		printf ("yes");
	else
		printf ("no");
}
