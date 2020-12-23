#include <stdio.h>
int kiemTra ();
void xuat (int x);
void main ()
{
	int kq=kiemTra ();

	
}
int kiemTra ()
{
	for (int i=10; i<=99; i++)
	{
		int a=i/10;
		int b=i%10;
		if ((a*b)==2*(a+b))
			xuat (i);
	}
	return 0;
	
}
void xuat (int x)
{
	printf ("%d ", x);
}