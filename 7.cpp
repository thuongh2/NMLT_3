#include <stdio.h>
void nhap (int &n);
void xuat (int kq);
int tinh (int n);
int main ()
{
	int n;
	nhap (n);
	int kq=tinh (n);
	xuat (kq);
	return 0;
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int tinh (int n)
{
	int d=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
			d=d+1;
	}
	return d;
}
void xuat (int kq)
{
	 if (kq==2)
		 printf ("true");
	 else 
		 printf ("flase");
}
