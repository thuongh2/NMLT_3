#include <stdio.h>
void nhap (int &n);
void xuat (int kq);
int tinh (int n);
void main ()
{
	int n;
	nhap (n);
	int kq=tinh (n);
	xuat (kq);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int tinh (int n)
{
	int sum=0;
	for (int i=1; i<=(float (n) /2); i++)
	{
		if (n%i==0)
			sum=sum+i;
	}
	if (sum==n)
		return 1;
}
void xuat (int kq)
{
	if (kq==1)
		printf ("true");
	else 
		printf ("flase");
}