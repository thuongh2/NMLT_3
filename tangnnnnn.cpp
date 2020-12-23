#include <stdio.h>
void xuat (int kt);
void nhap (int &n);
int kiemTra (int n); 
int main ()
{
	int n;
	nhap (n);
	int kt=kiemTra(n);
	xuat (kt);
	return 0;
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
int kiemTra (int n)
{
	int a=n%10;
	n=n/10;
	int t=0;
	int g=0;
	while (n>0)
	{
		int b=n%10;
		if (a<b)
			t++;// so giam dan
		if (a>b)
			g++;	
		n=n/10;
		a=b;
	}
	if (t==0)
		return 0;
	if (g==0)
		return 1;
	return 2;
}
void xuat (int kt)
{
	if (kt==0)
		printf ("so tang");
	else if (kt==1)
		printf ("so giam");
	else
		printf ("tao lao");
	
}

